

window.onload= function(){
    function findRange(num) {
        // Write your code here
        let min = 0;
        let max = 0;
        var num_map = num.toString();
        for(let i = 0;i<=9;i++){
            for(let j =0;j <=9;j++) {
                let rep_num = new RegExp(i, "g");
                rep_num = num_map.replace(rep_num,j);
                if(max < Number(rep_num)){
                    max = Number(rep_num);
                }
                if(min == 0){
                    min = Number(rep_num);
                }
                else if(min !=0 && min > Number(rep_num) && rep_num[0]!=0) {
                    min = Number(rep_num);
                }
            }
        }
        
        // return (max - min);
        return (max-min);
    }
    console.log(findRange(909));
}


