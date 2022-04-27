// 2022 KAKAO BLIND RECRUITMENT
// 문제 설명
// 신입사원 무지는 게시판 불량 이용자를 신고하고 처리 결과를 메일로 발송하는 시스템을 개발하려 합니다. 무지가 개발하려는 시스템은 다음과 같습니다.
// 각 유저는 한 번에 한 명의 유저를 신고할 수 있습니다.
// 신고 횟수에 제한은 없습니다. 서로 다른 유저를 계속해서 신고할 수 있습니다.
// 한 유저를 여러 번 신고할 수도 있지만, 동일한 유저에 대한 신고 횟수는 1회로 처리됩니다.
// k번 이상 신고된 유저는 게시판 이용이 정지되며, 해당 유저를 신고한 모든 유저에게 정지 사실을 메일로 발송합니다.
// 유저가 신고한 모든 내용을 취합하여 마지막에 한꺼번에 게시판 이용 정지를 시키면서 정지 메일을 발송합니다.

// id_list : user ID 문자열 배열
// report : "신고자ID 신고대상ID" 공백으로 구분
// k : 정지 기준이 되는 신고 횟수
// answer : id_list 배열

window.onload= function(){
    function solution(id_list, report, k) {
        let answer = [];
        let id_len = id_list.length;
        let report_set = new Set(report);
        let report_len = report_set.size;
        for(let i = 0;i< id_len;i++){
            if(answer[i] == null)
                answer[i] = 0;
        }
        for (let i = 0; i < report_len; i++) {
            let re_count = 0;
            let report_set_i = [...report_set][i];
            let report_set_i_split = (report_set_i || '').split(' ');
            for (let j = 0; j < report_len; j++) {
                let report_set_j = [...report_set][j];
                let report_set_j_split = (report_set_j || '').split(' ');
                if (report_set_i_split[1] == report_set_j_split[1]) {
                    re_count += 1;
                };
            }
            if (re_count >= k) {
                let reporter = report_set_i_split[0];
                for (let l = 0; l < id_len; l++) {
                    if (id_list[l] == reporter) {
                        answer[l] += 1;
                    }
                }
            }
        }
        return answer;
    }
    console.log(solution(["muzi", "frodo", "apeach", "neo"], ["muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"], 2));
}


