window.onload = function () {

    function maxLength(a, k) {
        // Write your code here
        const getCombinations = function (arr, selectNumber) {
            let results = 0;
            if (selectNumber === 1) return arr.map((value) => [value])
            arr.forEach((fixed, index, origin) => {
                const rest = origin.slice(index + 1);
                const combinations = getCombinations(rest, selectNumber - 1);
                const attached = combinations.map((combination) => [fixed, ...combination]);
                results += attached;
            });
            return results;
        };
        let a_len = a.length;
        let len = 0;
        for(let i = a_len ;i >= 0;i--){
            let get = getCombinations(a,i);
            let get_len = get.length;
            for(let j = 0; j < get_len; j++){
                let sum = 0;
                let get_len_j = get[j].length;
                for(let l = 0; l < get_len_j; l++){
                    sum += parseInt(get[j][l]);
                }
                if(sum == k) {
                    len = i;
                    return len;
                }

            }
        }
        return len;
    }

    console.log(maxLength([2, 2, 1, 1], 4))
}