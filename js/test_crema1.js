

window.onload= function(){
    function getFinalString(s) {
        // Write your code here
        while(s.search('AWS') != -1){
            s = s.replace('AWS','');
        }
        if(s == '') {
            return -1;
        }
        else {
            return s;
        }
    }
    console.log(getFinalString('AAWSWSG'));
}


