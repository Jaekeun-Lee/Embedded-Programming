# Embedded-Programming



 <h3>Cortex M3/M4 프로세서 아키텍쳐</h3>
  - 프로그래밍 모드와 액세스 레벨<br/>
  - 레지스터 모델 <br/>
  - CMSIS <br/>
  <br/><br/>
  
  
  
  
  
 <h3>메모리 시스템 아키텍쳐</h3>
  - 메모리 시스템과 메모리 맵 <br/>
  - 버스 프로토콜과 인터페이스 <br/>
  - 데이터 트랜스퍼 <br/>
  - Bit-Banding<br/>
<br/><br/>
  
  
  
  
  
 <h3>스택 메모리 </h3>
  - 스택 메모리와 모델 <br/>
  - 서브루틴과 스택 <br/>
  
  <br/><br/>
  
  
  
  
<h3>시스템 예외처리와 인터럽트</h3>
  - 시스템 예외처리와 인터럽트 <br/>
  - NVIC(Nested Vectored Interrupt Controller) <br/>
  - 인터럽트 우선 처리<br/>
  - Exception Vector Table <br/>
  - Pending Interrupt <br/>
  
  <br/><br/>
  
  
  
  
 <h3>Cortex M3/M4 OS Features</h3>
  - Shadowed stack pointer <br/>
  - 시스템 예외 SVC <br/>
  - Pend SV 시스템 예외 <br/>

<br/><br/>




 <h3>GPIO Driver </h3>
  - 개념 GPIO <br/>
  - 프로그래밍 구조 및 GPIO 레지스터 <br/>
  - 개발 GPIO Driver <br/>
  - 인터럽트 처리 GPIO<br/>

<br/><br/>




 <h3>SPI Driver </h3>
  - 개념 SPI <br/>
  - 레지스터 및 SPI TX/RX API 구현 <br/>
  - 통신 및 SPI Master/Slave 구현TX/RX ISR <br/>
  - 응용 SPI MASTER/SLAVE 프로그램 구현 <br/>


<br/><br/>



 <h3>I2C Driver</h3> 
  - 개념 I2C <br/>
  - 인터럽트 및 레지스터 I2C  <br/>
  - 개발 I2C Driver <br/>
  - 이벤트 인터럽트 처리 I2C <br/>
  - 에러 인터럽트 처리 I2C <br/>
  - 응용 프로그램 구현 <br/>







<blockquote style="text-align: center;" data-ke-style="style3"><span style="color: #666666;">&nbsp;Saver Light 프로젝트 계획서의 요약 버전입니다.<br /><br />Index의 항목을 누르면 해당 앵커로 이동합니다.</span></blockquote>
<p>&nbsp;</p>
<table id="index" style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 50%;"><br /><br /><br /><b>&nbsp; &nbsp; &nbsp; &nbsp; <span style="font-size: 24px;">INDEX</span></b><br /><br /><br /><br />&nbsp; <b>&nbsp;<a href="#1">1. 프로젝트 현황</a></b><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; 1-1. 프로젝트 일정<br /><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; 1-2. 프로젝트 목적 및 필요성<br /><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; 1-3. 프로젝트 목표<br /><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; 1-4. 기대효과 및 활용방안<br /><br /><br /><br /><br />&nbsp; <b>&nbsp;<a href="#2">2. 개념 설계 및 상세 설계</a></b><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; 2-1. 개념 설계<br /><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; 2-2. 상세 설계<br /><br /><br /><br /><br /><b><span style="color: #333333;"> &nbsp; &nbsp;<a href="#3">3. 제작 과정</a></span></b><br /><br /><span style="color: #333333;"> &nbsp; &nbsp; &nbsp; &nbsp; 3-1. 공정도</span><br /><br /><br /><span style="color: #333333;"> &nbsp; &nbsp; &nbsp; &nbsp; 3-2. 제작 과정<br /><br /><br /><br /><br /><span style="color: #333333;"> &nbsp; &nbsp;<b><a href="#4">4. 운용 및 시험</a></b></span><br /><br /><span style="color: #333333;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;4-1. 운용 및 시험 요구조건</span><br /><br /><br /><span style="color: #333333;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;4-2. 운용 및 시험<br /><br /><br />&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;4-3. 운용 및 시험 결과<br /><br /></span><br /><span style="color: #333333;"> &nbsp; &nbsp;<b><a href="#5">5. 결론</a></b></span><br /><br /><span style="color: #333333;"> &nbsp; &nbsp; &nbsp; &nbsp; 3-1. 문제점 분석 및 처리 결과</span><br /><br /><br /><span style="color: #333333;"> &nbsp; &nbsp; &nbsp; &nbsp; 3-2. 총평<br /><br /><br /></span><br /></span></td>
</tr>
</tbody>
</table>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h3 data-ke-size="size23">&nbsp;</h3>
<h3 id="1" data-ke-size="size23">&nbsp;1. 프로젝트 현황</h3>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20">&nbsp; &nbsp; &nbsp;1-1. 프로젝트 일정</h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>[##_Image|kage@nFuIi/btqEPmX6cpw/J6c5vOpDF0u20PCgKcshKk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<table style="border-collapse: collapse; width: 100%;" border="1" data-ke-style="style8">
<tbody>
<tr>
<td style="text-align: center;">
<p><b><span>일정</span></b></p>
</td>
<td style="text-align: center;">
<p><b><span>단계</span></b></p>
</td>
<td style="text-align: center;">
<p><b><span>작업</span></b></p>
</td>
</tr>
<tr>
<td>
<p><span><br />2020.05.13 </span><span>~ 2020.05.20<br /><br /></span></p>
</td>
<td>
<p><span><br />프로젝트계획<br /><br /></span></p>
</td>
<td>
<p><span><br />프로젝트 범위 확정</span></p>
<p><span>프로젝트 일정 확정</span></p>
<p><span>프로젝트 진행 방향 확정<br /><br /></span></p>
</td>
</tr>
<tr>
<td>
<p><span><br />2020.05.15 </span><span>~ 2020.05.23<br /><br /></span></p>
</td>
<td>
<p><span><br />자료 수집<br /><br /></span></p>
</td>
<td>
<p><span><br />Aduino </span><span>스펙</span><span>, </span><span>사용 센서<br /><br /></span></p>
</td>
</tr>
<tr>
<td>
<p><span><br />2020.05.20 </span><span>~ 2020.05.30<br /><br /></span></p>
</td>
<td>
<p><span><br />분석</span><span>/</span><span>설계<br /><br /></span></p>
</td>
<td>
<p><span><br />프로젝트에 맞는 요구사항 분석</span><span>/</span><span>정의</span></p>
<p><span>코딩 가이드 제작</span></p>
<p><span>디자인 가이드 제작<br /><br /></span></p>
</td>
</tr>
<tr>
<td>
<p><span><br />2020.05.25 ~ 2020.05.30<br /><br /></span></p>
</td>
<td>
<p><span><br />컨셉 디자인<br /><br /></span></p>
</td>
<td>
<p><span><br />제품 디자인<br />제품스케치<br />Rendering ( Rhino )<br />Context image&nbsp;<br /><br /></span></p>
</td>
</tr>
<tr>
<td>
<p><span><br />2020.05.30</span><span>&nbsp;</span><span>~ 2020.06.08<br /><br /></span></p>
</td>
<td>
<p><span><br />개발<br /><br /></span></p>
</td>
<td>
<p><span><br />프로그램 설계</span></p>
<p><span>각 센서별 코딩<br /><br /></span></p>
</td>
</tr>
<tr>
<td>
<p><span><br />2020.05.14.</span><span> </span><span>~ 2020.06.02<br /><br /></span></p>
</td>
<td>
<p><span><br />컨셉 디자인<br /><br /></span></p>
</td>
<td>
<p><span><br />제품 디자인</span></p>
<p><span>제품 스케치</span></p>
<p><span>Rendering</span></p>
<p><span>Context image </span><span>제작<br /><br /></span></p>
</td>
</tr>
<tr>
<td>
<p>&nbsp;</p>
<p><span>2020.05.20</span><span> </span><span>~ 2020.06.10 </span><span>(</span><span>매주 월</span><span>)<br /><br /></span></p>
</td>
<td>
<p>&nbsp;</p>
<p><span>테스트<br /><br /></span></p>
</td>
<td>
<p>&nbsp;</p>
<p><span>통합테스트</span></p>
<p><span>요구사항 추적</span></p>
<p><span>미비점 보완</span></p>
<p><span>프로토타입 제작<br /><br /></span></p>
</td>
</tr>
</tbody>
</table>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span>&nbsp; &nbsp; &nbsp; 1-2. </span><span>목적 및 필요성</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; 매년 </span><span>43000</span><span>건의 화재 평균 건 수로 </span><span>300</span><span>명의 평균 사망자가 발생하고 있다</span><span>. </span><span>가정</span><span>, </span><span>공장</span><span>,</span><span>공공시설 등 다양한 곳의 화재로 인해 재산피해 뿐만아니라 수많은 인명피해가 발생하고 있다</span><span>. </span><span>최근 </span><span>6</span><span>년간 많은 장소의 화재 사고 중 주택 화재 사망자 비율이 전체 화재 사망자의 약 </span><span>50% </span><span>이상이었고 그 사망원인은 </span><span>60%</span><span>이상이 유독가스에 의한 질식사로 밝혀졌다</span><span>.</span></p>
<p><span> </span><span>현재 화재시 유독가스 피해에 대한 대책으로는 초기 진압 강조</span><span>, </span><span>제연 경계벽</span><span>, </span><span>방독면</span><span>, </span><span>자동 방화셔터 등 임시 방편으로 화재의 확산을 막을 수 있는 방법만 강조하고 있다</span><span>. </span><span>하지만 기존의 소화기</span><span>, </span><span>스프링 클러는 유독가스를 제거하지 못해 사망원인의 대부분을 차지하는 유독가스 질식사를 완화하기 힘들다</span><span>. </span><span>따라서 많은 화재사고 사망자의 주 원인인 유독가스를 제거할 수 있다면 생존률을 더 높이기 위해 프로젝트를 고안해 보았다</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span>&nbsp; &nbsp; &nbsp; 1-3. </span><span>프로젝트 목표</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; 1. </span><span>화재 시 가장 위협요소인 유독가스를 제거</span><span>.</span></p>
<p><span></span><span>&nbsp; 2. </span><span>정화된 공기로 질소 소화</span></p>
<p><span></span><span>&nbsp; 3. </span><span>소방관 구조 시 백드래프트 현상 방지</span></p>
<blockquote data-ke-style="style2"><span> </span><span>컨셉키워드 </span><span>: S.A.V.E ( Safe / Available / Valuable / Essential ) </span></blockquote>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span></span><span>&nbsp; &nbsp; &nbsp; 1-4</span><span>. </span><span>기대효과 및 활용방안</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; 주변 미관을 해치지 않고 조화가 잘되는 제품을 디자인하고 일반 형광등</span><span>, LED </span><span>등과 결합하여 </span></p>
<p><span>개개인의 주거공간이나 회사</span><span>, </span><span>유동인구가 많은 공공장소</span><span>( </span><span>학교</span><span>, </span><span>지하철</span><span>, </span><span>공항 </span><span>) </span><span>등 다양한 장소에 사용 가능</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p style="text-align: center;"><span style="color: #333333;"><a href="#index">[ 맨위로 ]</a></span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h3 id="2" data-ke-size="size23"><span>&nbsp;2. </span><span>개념설계 및 상세설계</span></h3>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span></span><span>&nbsp; &nbsp; &nbsp; 2-1</span><span>. </span><span>개념설계</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p data-ke-size="size18"><span></span><span>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 1. </span><span>이론적 배경</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<ul style="list-style-type: square;" data-ke-list-type="square">
<li><span></span><span>공기흡입형 감지기 형태</span></li>
<li><span> </span><span>조명과 결합하여 효율성 최대화</span></li>
<li><span> </span><span>비상 시 사용가능 하도록 내부에 화재 마스크 보관</span></li>
<li><span> </span><span>화재 시 정전을 대비하여 비상용 배터리 포함</span></li>
</ul>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p data-ke-size="size18"><span>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 2.<span> 제품 스케치</span></span></p>
<p data-ke-size="size18">&nbsp;</p>
<p>&nbsp;</p>
<p>[##_Image|kage@2gvuO/btqEP3KjoGi/3ab7UPEXVFLtiDWc9loTuk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@bHgbIx/btqEPUthtPr/oQy16HT91coTxOCDxk34uk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@m0oLx/btqEP4vFnNx/dMaSvABxKouuTq5uq1aJe1/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@bIhagO/btqEOPUghPw/LW9QUhnyfuvfjcFlnFHMU0/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@bqts4J/btqEPgcL4qJ/KQAAqZLRoI09MT1widYH71/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@eeyguc/btqEPfZgotm/82w442PrNITRWzRZsRK67k/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span>&nbsp; &nbsp; &nbsp; 2-2</span><span>.<span>&nbsp;</span></span><span>상세설계</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span><span style="color: #333333;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 1. 제품의 크기 및 도면</span></span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>[##_Image|kage@cLNm5m/btqEOQljj36/0ufUlTPaUWJ38XPlFKdnj0/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@cCV7gB/btqEP3Q3OOB/whhIhA8ZARt0NK1POOGFH1/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@c92tlz/btqEOZI39sm/cFUpqkc15DP91eIXnck4BK/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@Kd8Jb/btqEPeFZ9FA/8S67TKDHKuYvz9ITyo85nk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@Pobod/btqEOO8R8Ds/XbjNLxXuk2OeWpHPpYGSwk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@bwDRaq/btqEQut81vY/9v1JlOFnAcuM1ZkxuC3ZtK/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@cNM5Lb/btqEP4h8OWT/MHygkdAVUFEpRkwovqXE9K/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span style="color: #333333;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 2. 필요 부품&nbsp; 리스트</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<ol style="list-style-type: decimal;" data-ke-list-type="decimal">
<li><span style="color: #333333;"><span>아두이노 </span><span>UNO </span><span>보드 </span></span></li>
<li><span>LED</span><span>등</span><span>,</span></li>
<li><span>가스 감지 센서 </span></li>
<li><span>DC</span><span>팬 </span></li>
<li><span>LCD </span><span>디스플레이 </span></li>
<li><span>빔프로젝터</span></li>
<li><span>모터</span></li>
<li><span>부저</span></li>
</ol>
<p>&nbsp;</p>
<p>[##_Image|kage@UyH0l/btqEQtILVMN/pcirzw577dYBZigOM7IWD1/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|Aduino uno board||_##][##_Image|kage@5gdGN/btqEPVTguiY/3S147T22Exb6BBYAyRlk3K/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|MQ-2 Sensor||_##][##_Image|kage@mA7oo/btqEPlkByNS/DISQb6qx4Hk8HNhjiLJp81/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|DC 12V DC Fan||_##][##_Image|kage@VV41H/btqEOakeRgq/zjyA5Ff0U1yLDM7TPz42o1/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|LCD Display Module||_##][##_Image|kage@cto0JE/btqEOErPcc1/wK3EKZe5UEsCoKREdpnxX1/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|LED Module||_##][##_Image|kage@cfkYp7/btqEPuhhh33/eOOdpRiLtj8OZBTQqyASg0/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|Raisor Pointer ( 빔프로젝터 임시 대체용 )||_##][##_Image|kage@dzO5yM/btqEODGujJi/6E0yyoJdzmWNPDCBORlkw0/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|Sub Motor||_##][##_Image|kage@cTPRqS/btqEP2YWieW/YQDa2WuWbKmkhkFVEHRmPK/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|Buzzer||_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p style="text-align: center;"><span style="color: #333333;"><a href="#index">[ 맨위로 ]</a></span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h3 id="3" data-ke-size="size23">&nbsp;3. 제작 과정</h3>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span>&nbsp; &nbsp; &nbsp; 3-1</span><span>.<span> 공정도 ( 요약 )</span></span></h4>
<p>&nbsp;</p>
<p>[##_Image|kage@beyYJU/btqEP3XWcm0/SnedGmMtx2lsBBxiqkOX4k/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>[##_ImageSlide|kage@EIJ4v/btqEPeTwPwo/Rrwp858eQPC3le61rkmDg1/img.png,kage@bB4z0O/btqEPvgbIbO/E8NTdHvd9M6UdTTlbFoBwK/img.png,kage@dkDF7b/btqEOaR4v8C/ekwlgR4ZfcUzu8Udvukf7k/img.png,kage@AhdQ3/btqEPmRkFQN/vubo9ldmpkvtM1Po8ekym1/img.png,kage@bF6sp7/btqEOPNrGzz/UrxJahocvDKNSulNpGrVZ0/img.png,kage@dXstCB/btqEQuATHz2/Ts8Xp4Gkzu2gi7fsvucmM1/img.png|alignCenter|data-origin-width="302" data-origin-height="416"|_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p style="text-align: center;"><span style="color: #333333;"><a href="#index">[ 맨위로 ]</a></span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h3 id="4" data-ke-size="size23">&nbsp;4. 운용 및 시험<span style="overflow: hidden; line-height: 0px;"></span></h3>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20">&nbsp; &nbsp; &nbsp;4-1. <span>운용 및 시험 요구조건</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; -&nbsp; </span><span>운용 요구조건은 프로그래밍된 보드</span><span>(Arduino Uno), </span><span>그리고 그 보드에 센싱 할 수 있는 센서</span><span>(MQ-2)</span><span>를 연결하여 구성된 보드를 사용하여 운용한다</span><span>. </span><span>시험 요구조건은 화재가 발생하여 유독가스가 생겼다는 요구조건 아래 운용 및 시험을 진행합니다</span><span>. </span><span>이때 유독가스는 라이터의 가스 등 가연성이 있는 가스로 대체하여 시험을 진행합니다</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20">&nbsp;</h4>
<h4 data-ke-size="size20">&nbsp; &nbsp; &nbsp;4-2.<span>&nbsp;</span><span>운용 및 시험</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><iframe src="https://www.youtube.com/embed/4-m2XW1nkyQ" width="560" height="315" frameborder="0" allowfullscreen=""></iframe></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20">&nbsp;</h4>
<h4 data-ke-size="size20">&nbsp;</h4>
<h4 data-ke-size="size20">Context Image</h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>[##_Image|kage@PJL7K/btqEOZbgtdm/QBudjKMiOqom9FHwaQI6aK/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@bD9W66/btqEOZh104M/9nLJOiAFoUnQqk1RTOOkQ1/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@bjs0cm/btqEPessD80/DDDnbUNavqMHnU2vqqafCk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##][##_Image|kage@cFOdxH/btqEPe64B5a/T9xyWC3uPBOdT1P8gSB3L0/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20">&nbsp; &nbsp; &nbsp;4-3.<span> <span style="color: #333333;">운용 및 시험결과</span></span></h4>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; -&nbsp; </span><span>유독가스를 센싱하여 받는 센서</span><span>(MQ-2)</span><span>가 입력값을 이용하여</span><span>, </span><span>입력받은 데이터로 </span><span>Buzzer, Fan, Laser pointer, Servo motor </span><span>가 작동합니다</span><span>. </span><span>작동 수치는 입력받은 데이터의 수치가 기준 이상으로 상승하였을 때</span><span>, </span><span>작동하게 됩니다</span><span>. </span></p>
<p><span>정해진 수치 기준 이상이 되었을 때 유독가스가 발생하였고 위험하다고 판단이 되기 때문에 경고음</span><span>(Buzzer)</span><span>가 작동하고</span><span>, </span><span>탈출에 필요한 방향등</span><span>(Laser pointer)</span><span>이 켜지며</span><span>, </span><span>장치의 뚜껑</span><span>(Servo motor)</span><span>가 열리게 됩니다</span><span>. </span><span>그리고 유독가스의 발생으로 환기를 위해 공기청정 및 공조기</span><span>(FAN)</span><span>이 작동하게 됩니다</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p style="text-align: center;"><span style="color: #333333;"><a href="#index">[ 맨위로 ]</a></span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h3 id="5">&nbsp;5. 결론</h3>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20">&nbsp;</h4>
<h4 data-ke-size="size20">&nbsp; &nbsp; &nbsp;5-1.<span>&nbsp;</span><span>문제점 분석 및 처리결과</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p data-ke-size="size18"><span></span><span>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 1. </span><span>과제에 대한 문제 분석</span></p>
<p data-ke-size="size18">&nbsp;</p>
<p data-ke-size="size18">&nbsp;</p>
<p><span></span><span>&nbsp; &nbsp; &nbsp;가</span><span>. </span><span>문제점</span></p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; -&nbsp; </span><span>현재의 장치는 화재의 발생의 유무의 판단은 불가하고 유독가스가 발생했는지 유무를 판단만 하는 점이 </span><span>1</span><span>번째 문제점이다</span><span>. 2</span><span>번째 문제점은 다른장치와의 </span><span>IOT, </span><span>사물인터넷이 현재는 구비되어 있지 않다</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; &nbsp; &nbsp;나</span><span>. </span><span>개선방안 및 처리결과</span></p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; -&nbsp; 1</span><span>번째 문제점의 개선방안은 화재감지를 할 수 있는 불꽃 감지 센서와 온도센서를 이용하여 화재의 발생과 그로인해 발생하는 열을 감지 할 수 있도록 센싱할 수 있는 센서를 장착하여 개선을 한다</span><span>. 2</span><span>번째의 문제점 개선방안은 다른장치와의 연결이 가능하도록 유</span><span>/</span><span>무선을 이용하여 중앙관리장치와 연결하여 사물인터넷을 구성하여 사용하도록 처리를 하는 것이다</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h4 data-ke-size="size20"><span>&nbsp; &nbsp; &nbsp;5-2. </span><span>총평</span></h4>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><span></span><span>&nbsp; &nbsp;필터 구매 후 가스가 감지되고 팬이 작동되면서 가스가 정화되는지 농도측정을 해보고 </span><span>빔프로젝터 대용으로 사용한 레이저 포인터도 빔프로젝터로 변경해야함</span><span>.</span></p>
<p><span> </span><span>연간 평균 </span><span>4</span><span>만</span><span>5</span><span>천건의 발생과 </span><span>400</span><span>여명이 넘는 사상자를 발생시키는 화재에 대해 이 장치는 사상자가 많이 발생하는 질식관련 문제에 중점을 두어 고려를 한 장치입니다</span><span>. </span><span>앞으로 이 장치가 개선되고 더 개발이 되어 화재 발생시 유독가스에 의한 사상자의 수를 줄이는 영향주는 효과를 보여주기를 기대하는 바이다</span><span>.</span></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p style="text-align: center;"><span style="color: #333333;"><a href="#index">[ 맨위로 ]</a></span></p>





