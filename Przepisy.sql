BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "Przepisy" (
	"Nazwa"	TEXT NOT NULL,
	"Przygotowanie"	TEXT NOT NULL,
	"Czas przygotowania"	INTEGER NOT NULL,
	"Składnik1"	TEXT,
	"Składnik2"	TEXT,
	"Składnik3"	TEXT,
	"Składnik4"	TEXT,
	"Składnik5"	TEXT
);
INSERT INTO "Przepisy" VALUES ('Kotlety mielone','Bułkę zalej mlekiem i odstaw na 10 minut. W tym czasie drobno posiekaj cebulę. W misce wymieszaj mięso, jajko, siekaną cebulę, sól, pieprz i dokładnie odciśniętą bułkę. 

W trakcie wyrabiania możesz do mięsa dolać odrobinę wody, trzeba mieszać aż mięso ją wchłonie i nie będzie się kleiło do rąk. Im dłużej będziesz wyrabiać, tym kotlety wyjdą lepsze. Dlatego absolutne minimum to 5-7 minut. Uformuj kotlety nie za duże, najlepiej wielkości pięści. Obtaczaj każdy w tartej bułce. Dobrze rozgrzej tłuszcz (inaczej kotlety go wchłoną) i smaż na rumiano z każdej strony. 
',20,'mięso mielone','bułka tarta','jajko','cebula','mleko');
INSERT INTO "Przepisy" VALUES ('Kotlety schabowe','Mięso pokroić na plastry. Każdy rozbić tłuczkiem, opłukać pod bieżącą wodą.
Posolić.
Jajko wymieszać z mlekiem i mąką. Posolić, dodać pieprz.
Kotlety maczać w masie jajecznej, a następnie obtoczyć w bułce tartej.
Kotlety schabowe smażyć na oleju. Gotowe wykładać na ręcznik wyłożony papierowym ręcznikiem.',30,'schab','jajko','bułka tarta','mąka','mleko');
INSERT INTO "Przepisy" VALUES ('Spagetti','Cebulę i czosnek chwilkę podsmażyć na oleju. Dodać mięso mielone. Kolejno dodać marchewkę. Wszystko razem chwilę smażyć. Dodać sos. Całość dusić pod przykryciem na małym ogniu ok. 20 minut. Przyprawić solą, pieprzem i oregano.
Spaghetti ugotować według przepisu na opakowaniu. Odcedzić na durszlaku. (Nie przelewać zimną wodą).
Spaghetti rozłożyć na talerzach. Polać sosem z mięsem i posypać parmezanem.',30,'makaron','mięso mielone','sos do spagetti','cebula','oregano');
INSERT INTO "Przepisy" VALUES ('Naleśniki','W misce mieszam dokładnie wodę, mleko, mąkę ze szczypta soli. Ciasto musi być lejące i gładkie. Odstawiam je na 15-30 minut.
Po odpoczynku ciasto lekko zgęstnieje. Do ciasta naleśnikowego dodaję olej i mieszam ponownie bardzo dokładnie do czasu aż połączy się z ciastem.
Mocno rozgrzewam patelnię. Pierwszego naleśnika smażę małego tak, aby łatwo odszedł od patelni. Naleśniki przewracam drewnianą szpatułką. Wykładam na talerz i wołam rodzinę.',25,'mleko','woda','olej','jajko','mąka');
INSERT INTO "Przepisy" VALUES ('Pierogi','Mąkę typu 450 (maksymalnie 480) dokładnie przesiewam. Czasami zdarza się, że mąka jest zbita, dostają się drobne zanieczyszczenia, dlatego warto się tego pozbyć.
W osobnym naczyniu mieszam ze sobą letnią wodę, sól i olej. Dodaję całość do mąki.
Początkowo ciasto lekko mieszam za pomocą szpatułki. W końcu zaczynam wyrabiać ciasto rękoma. Najpierw jedną ugniatam wszystko i jak tylko widzę, że odchodzi od brzegów naczynia, to przekładam je na stolnicę.
Wyrabiam ciasto dwoma rękoma przez ok. 15 minut. Tak aby było elastyczne i miękkie. Pod wpływem nacisku i ciepła ciasto nabiera idealnej konsystencji.
Dzielę ciasto na części. Kiedy jedną cześć rozwałkowuję, to pozostałe trzymam pod przykryciem. Dzięki temu ciasto utrzyma odpowiednią wilgotność.
Dodać nadzienie do każdego pieroga i uformować. Gotować 10min na wrzącej wodzie.',40,'mąka','olej','sól','woda','nadzienie');
INSERT INTO "Przepisy" VALUES ('Placki','Obrane ziemniaki i cebulę ścieramy na tarce o drobnych oczkach, wylewamy masę na sitko ustawione na naczyniu i delikatnie odciskamy. Ziemniaki mieszamy z jajkami i mąką oraz dodajemy przeciśnięty przez praskę czosnek (opcjonalnie). Z naczynia, nad którym odcedzaliśmy ziemniaki z nadmiaru wody, odlewamy delikatnie sok zostawiając na dnie skrobię ziemniaczaną. Skrobię dodajemy do masy wraz 1 łyżką śmietany, doprawiamy solą oraz pieprzem i smażymy z obu stron na złoty kolor. Gotowe placki podajemy z gęstą śmietaną lub jogurtem naturalnym.',30,'ziemniaki','cebula','jajko','mąka','przyprawy');
COMMIT;
