<script>
var ci2 = []; ti2=0;
var url1="https://twblg.dict.edu.tw/holodict_new/audio/";
ci2[0]=["𠢕早","gâu-tsá","形：早安。問候語","13508"];
ci2[1]=["暗班","àm-pan","名：晚班","09630"];
ci2[2]=["見面","kìnn-bīn","動：相見、會面","03459"];
ci2[3]=["交陪","kau-puê","動：應酬、交際往來","02086"];
ci2[4]=["䆀指","bái-tsáinn","名：無名指","13555"];


function fainsrc(){
   fain.src=url1 + ci2[ti2][3] + ".mp3";
   fain.play();
}
function print(){
    tai2yu2.innerHTML=ci2[ti2][0]; //台語漢字
    tai2luo2.innerHTML=ci2[ti2][1]; //台羅拼音
    zhong1wen2.innerHTML=ci2[ti2][2]; //華語意思
}
function next(){
   if( ti2 < ci2.length-1) ti2++;  else ti2=0;
   print(); fainsrc();
//   alert(ti2);
}
</script>
<audio src=13508.mp3 id=fain></audio>
<button onclick=fainsrc()>發音</button>
<button onclick=next() accesskey="s">next</button>
<div id=tai2yu2>
</div>
<div id=tai2luo2>
</div>
<div id=zhong1wen2>
</div>


<script>
  print();
</script>
