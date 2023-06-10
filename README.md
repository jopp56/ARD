# ARDart

1. Vuforia Licence key:
	wird gebraucht damit das Image Target geht: In unity: Window->Vuforia configuration-> Copy paste den Licence key in das Textfeld.
	Es ist nicht nötig add Licence zu Clicken!!
	Licence key:

	AdOO3dL/////AAABmbIjRgtc9EQHrEAeAPPLqSEbbNVlt1QLPvUm+TAN/kSReMHFaGwGXhjmw4Co2yDIzL2RPex98HFCWEaVL4BlJAaS2DfeqpyqZRW+i0Jkx+pTPOH6gDo6	YFAGoEnDNp0HNxlQ4wIneUEWNfrdvoRest4q7Eegl18bNo2lJTXO0trzc9Feqb3ZoLDnp9GpGCFNQM9xyGxcVDsDkZK6yq/eQ3A83M41sqD8yrc2IoXQueHo+XhzEwtY3ZNc	knh1bmZYpQHizhTosPw7B4wvWesR3ayoisyiy2Yzv8LgIVpJpY7nW0GDUi3vwwfnn/Iot3YxAi2Nn+Flw1jggNGMPllnL3BNDzFHmTQu914XytBkygZt

2. Unity Probleme:
	2.1 ArtifactDB Lock:
	In dem Projekt ordner unter library den File ArtifactDB löschen.
	
	2.2: Im Playmode wird Dartscheibe nicht angezeigt:
	Vuforia Licence Key fehlt(siehe oben 1)

3.GitHub Desktop Probleme und Wichtiges:
	3.1: Error File Lock already exists:
	Leider hilft hier nur das Repository neu zu clonen.a
	
	
	3.2:Mergen der Branches:
	a.Gehe auf die Branch in die du Mergen willst
	b.Gehe auf Branch und wähle merge into current branch. Wähle deine Branch wo die changes sind.
	c.Es kann conflicts geben diese sollten nicht zu viele sein sonst wirds schwer. Daumenregel: Wähle zum resolven immer ,,use 	modified files from x" wobei x hier die branch ist wo du die changes gemacht hast.(ebenso ,,dont include in x" wählen).
	d.push nicht vergessen und einmal in der gruppe schreiben wenn du auf main gemerged hast
	
	3.3: Sind changes auf der Main gemacht worden:
	a.Änderungen auf der Eigenen erstmal pushen
	b.Auf Branch gehen und wähle update from main. Dann noch commiten und pushen.
	c.Sind wieder conflicts: Hier nicht deine modified files wählen denn die changes sind ja auf main!!! Also immer main auswählen!!!!
	
	3.4:Ab und zu commiten, pushen und mergen mit main!!!!!