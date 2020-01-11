/* Codewars 7 Kyu
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
*/
   
function accum(s){      
  return s.split('').map((s,i)=>s.toUpperCase()+s.toLowerCase().repeat(i)).join("-"); 
}
