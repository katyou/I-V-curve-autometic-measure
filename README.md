I-Vカーブ自動測定装置
====

labwork

## 概要
pythonを使って太陽電池のI-Vカーブの測定装置の自動化を行う.
使用装置はarduino,raspberry pi.最終的な目標は、グラフの自動描写とweb上へのアップ

##プログラム内容
arduino側に測定装置から送られる電圧、電流値を読み込むプログラムを書く。
raspberry pi側にはarduino側で読み取った値をシリアル接続でraspiに送りテキストファイルで保存するように指示
また条件として朝の6時から夕方の18時までしか測定は行わないようにする