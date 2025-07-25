<?php

/*
 +-----------------------------------------------------------------------+
 | Localization file of the Roundcube Webmail client                     |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/messages/
*/

$messages['errortitle']  = 'エラーが発生しました!';
$messages['loginfailed']  = 'ログインできませんでした。';
$messages['cookiesdisabled'] = 'ブラウザーがCookieを受け付けません。';
$messages['sessionerror'] = 'セッションが正しくないか期限が切れています。';
$messages['cookiesmismatch'] = 'クッキーの不一致を検出しました。ブラウザーのクッキを消去してください。';
$messages['storageerror'] = 'IMAP サーバーへの接続に失敗しました。';
$messages['servererror'] = 'サーバーでエラーです!';
$messages['servererrormsg'] = 'サーバーエラー: $msg';
$messages['accountlocked'] = 'ログインを失敗し過ぎです、後で再び試してください。';
$messages['connerror'] = '接続エラー(サーバーに到達できません)!';
$messages['dberror'] = 'データベースのエラーです!';
$messages['dbconnerror'] = 'データベースに接続できません!';
$messages['windowopenerror'] = 'ポップアップウィンドウがブロックされました!';
$messages['requesttimedout'] = 'リクエストのタイムアウト';
$messages['errorreadonly'] = '操作を実行できませんでした。フォルダーは読み込み専用です。';
$messages['errornoperm'] = '操作を実行できませんでした。権限がありません。';
$messages['erroroverquota'] = '操作を実行できませんでした。空きディスク容量がありません。';
$messages['erroroverquotadelete'] = '空きディスク容量がありません。メッセージを削除するには SHIFT+DEL を使用してください。';
$messages['invalidrequest'] = '不正なリクエストです!  データは保存していません。';
$messages['invalidhost'] = '正しくないサーバー名です。';
$messages['nomessagesfound'] = 'このフォルダーにはメッセージはありません。';
$messages['loggedout'] = 'セッションを正しく終了しました。さようなら!';
$messages['mailboxempty'] = 'メールボックスは空です。';
$messages['nomessages'] = 'メッセージなし';
$messages['refreshing'] = '再表示中...';
$messages['loading'] = '読み込み中...';
$messages['uploading'] = 'ファイルをアップロード中...';
$messages['attaching'] = 'ファイルを添付...';
$messages['uploadingmany'] = 'ファイルをアップロード中...';
$messages['loadingdata'] = 'データを読み込み中...';
$messages['checkingmail'] = '新しいメッセージを確認中...';
$messages['sendingmessage'] = 'メッセージを送信中...';
$messages['messagesent'] = 'メッセージを送信しました。';
$messages['savingmessage'] = 'メッセージを保存中...';
$messages['messagesaved'] = 'メッセージを下書きに保存しました。';
$messages['successfullysaved'] = '保存しました。';
$messages['savingresponse'] = '回答の文章を保存中...';
$messages['deleteresponseconfirm'] = 'この回答の文章を本当に削除しますか?';
$messages['nocontactselected'] = 'まだ連絡先を選択していません。';
$messages['addedsuccessfully'] = '連絡先をアドレス帳に追加しました。';
$messages['contactexists'] = '同じ電子メールアドレスの連絡先が既に存在します。';
$messages['contactnameexists'] = '同じ名前の連絡先が既に存在します。';
$messages['blockedimages'] = 'あなたのプライバシーを守るため、このメッセージに含まれる外部画像を遮断しました。';
$messages['blockedresources'] = 'あなたのプライバシーを守るためリモートのリソースを遮断しました。';
$messages['suspiciousemail'] = 'このメッセージは詐欺等と思われる不審なメールアドレスを含んでいます。';
$messages['bccemail'] = '転送されたメッセージは機密の宛先(Bcc)を含んでいます。';
$messages['bouncehint'] = 'メッセージを無修整で送信します、すなわち元の本文、ヘッダー、宛先を使用します。';
$messages['encryptedmessage'] = 'このメッセージは暗号化されていて表示できません、ごめんなさい!';
$messages['externalmessagedecryption'] = 'このメッセージは暗号化されていて、ブラウザーの拡張で復号できるでしょう。';
$messages['nopubkeyfor'] = '$email への有効な公開鍵がありません。';
$messages['nopubkeyforsender'] = 'あなたの送信者としての有効な公開鍵がありません。メッセージを宛て先だけが復号できるように暗号化しますか?';
$messages['encryptnoattachments'] = '既にアップロードした添付ファイルは暗号化できません。暗号化のエディター内で再度追加してください。';
$messages['searchpubkeyservers'] = '欠けている鍵を公開なキーサーバーで検索しますか?';
$messages['encryptpubkeysfound'] = '以下のキーサーバーが見つかりました:';
$messages['keyservererror'] = 'キーサーバーからキーを取得できませんでした。';
$messages['keyimportsuccess'] = '公開鍵: $keyをキーリングにインポートしました。';
$messages['nocontactsfound'] = '連絡先がありません。';
$messages['contactnotfound'] = '連絡先が見つかりません。';
$messages['contactsearchonly'] = '選択したアドレス帳の連絡先を見るには検索欄を使用しなければなりません。';
$messages['sendingfailed'] = 'メッセージを送信できませんでした。';
$messages['senttooquickly'] = 'このメッセージを送信するまで、$sec秒お待ちください。';
$messages['errorsavingsent'] = '送信したメッセージの保存中にエラーが発生しました。';
$messages['errorsaving'] = '保存中にエラーが発生しました。';
$messages['errormoving'] = 'メッセージを移動できません。';
$messages['errorcopying'] = 'メッセージをコピーできません。';
$messages['errordeleting'] = 'メッセージを削除できません。';
$messages['errormarking'] = 'メッセージにマークを設定できません。';
$messages['alerttitle'] = '注意';
$messages['confirmationtitle'] = '本当に...';
$messages['deletecontactconfirm']  = '選択した連絡先を本当に削除しますか?';
$messages['deletegroupconfirm']  = 'このグループを本当に削除しますか?';
$messages['deletemessagesconfirm'] = '選択したメールを本当に削除しますか?';
$messages['deletefolderconfirm']  = 'このフォルダーを本当に削除しますか?';
$messages['movefolderconfirm']  = 'このフォルダーを本当に移動しますか?';
$messages['purgefolderconfirm']  = 'このフォルダーのすべてのメールを本当に削除しますか?';
$messages['contactdeleting'] = '連絡先を削除中...';
$messages['groupdeleting'] = 'グループを削除中...';
$messages['folderdeleting'] = 'フォルダーを削除中...';
$messages['foldermoving'] = 'フォルダーを移動中...';
$messages['foldersubscribing'] = 'フォルダーを購読中...';
$messages['folderunsubscribing'] = 'フォルダーの購読を解除中...';
$messages['formincomplete'] = 'フォームに未記入の項目があります。';
$messages['noemailwarning'] = '正しい電子メールアドレスを入力してください。';
$messages['nonamewarning']  = '名前を入力してください。';
$messages['nopagesizewarning'] = 'ページのサイズを入力してください。';
$messages['nosenderwarning'] = '送信者の電子メールアドレスを入力してください。';
$messages['recipientsadded'] = '宛先を追加しました。';
$messages['norecipientwarning'] = '少なくとも1つ宛先を入力してください。';
$messages['disclosedrecipwarning'] = 'すべての宛て先は互いに他のメールアドレスを見ることになります。これを防いで、それぞれのプライバシーを守るにはBcc欄を使用します。';
$messages['disclosedreciptitle'] = '宛て先が多すぎます。';
$messages['nosubjectwarning']  = '件名(Subject)の欄が空です。今、入力しますか?';
$messages['nosubjecttitle']  = '件名なし';
$messages['nobodywarning'] = '本文の無いメッセージを送信しますか?';
$messages['notsentwarning'] = 'まだメッセージを送信していなくて、保存していない変更もあります。変更した内容を破棄しますか?';
$messages['restoresavedcomposedata'] = '以前に作成して未送信のメッセージがあります。\n\n件名: $subject\n保存日: $date\n\nこのメッセージを回復しますか?';
$messages['nosearchname'] = '連絡先の名前か電子メールアドレスを入力してください。';
$messages['notuploadedwarning'] = 'すべての添付ファイルのアップロードを完了していません。今しばらく待つか、取り消ししてください。';
$messages['searchsuccessful'] = '$nr通のメッセージが見つかりました。';
$messages['contactsearchsuccessful'] = '$nr件の連絡先が見つかりました。';
$messages['searchnomatch'] = '一致するものが見つかりませんでした。';
$messages['searching'] = '検索中...';
$messages['checking'] = '確認中...';
$messages['stillsearching'] = 'さらに検索中...';
$messages['nospellerrors'] = 'スペルミスは見つかりませんでした。';
$messages['folderdeleted'] = 'フォルダーを削除しました。';
$messages['foldersubscribed'] = 'フォルダーを購読しました。';
$messages['folderunsubscribed'] = 'フォルダーの購読を解除しました。';
$messages['folderpurged'] = 'フォルダーを空にしました。';
$messages['folderexpunged'] = 'フォルダーの整理を完了しました。';
$messages['deletedsuccessfully'] = '削除しました。';
$messages['converting'] = 'メールから書式を削除中...';
$messages['messageopenerror'] = 'サーバーからメールを読み込めません。';
$messages['filelinkerror'] = 'ファイルを添付できませんでした。';
$messages['fileuploaderror'] = 'ファイルをアップロードできませんでした。';
$messages['csvfilemismatch'] = '列の異なる複数のCSVファイルのアップロードはサポートしていません。';
$messages['filesizeerror'] = 'アップロードするファイルのサイズが上限($size)を超えました。';
$messages['filecounterror'] = '一度に最大で$count個のファイルをアップロードできます。';
$messages['msgsizeerror'] = 'ファイルを添付できませんでした。メッセージの最大サイズ($size)を超えています。';
$messages['msgsizeerrorfwd'] = 'メッセージの最大サイズ($size)を超過しました。$num個のメッセージを添付していません。';
$messages['copysuccess'] = '$nr個の連絡先をコピーしました。';
$messages['movesuccess'] = '$nr個の連絡先を移動しました。';
$messages['copyerror'] = 'どの連絡先もコピーできませんでした。';
$messages['moveerror'] = 'どの連絡先も移動できませんでした。';
$messages['sourceisreadonly'] = 'このアドレスソースは読み込み専用です。';
$messages['errorsavingcontact'] = '連絡先のアドレスを保存できません。';
$messages['movingmessage'] = 'メッセージを移動中...';
$messages['copyingmessage'] = 'メッセージをコピー中...';
$messages['copyingcontact'] = '連絡先をコピー中...';
$messages['movingcontact'] = 'Moving contact(s)...';
$messages['deletingmessage'] = 'メッセージを削除中...';
$messages['markingmessage'] = 'メッセージにマークを設定中...';
$messages['addingmember'] = 'グループに連絡先をコピー中...';
$messages['removingmember'] = 'グループから連絡先を削除中...';
$messages['receiptsent'] = '開封通知を送信しました。';
$messages['errorsendingreceipt'] = '開封通知を送信ができませんでした。';
$messages['deleteidentityconfirm'] = 'この識別情報を本当に削除しますか?';
$messages['nodeletelastidentity'] = 'この識別情報は最後の1つなので削除できません。';
$messages['forbiddencharacter'] = 'フォルダー名に使用できない文字が含まれています。';
$messages['selectimportfile'] = 'アップロードするファイルを選択してください。';
$messages['addresswriterror'] = '選択したアドレス帳は書き込みできないアドレス帳です。';
$messages['contactaddedtogroup'] = 'このグループに連絡先を追加しました。';
$messages['contactremovedfromgroup'] = 'このグループから連絡先を削除しました。';
$messages['nogroupassignmentschanged'] = 'グループの割り当てを変更しませんでした。';
$messages['importwait'] = 'インポート中です。しばらくお待ちください...';
$messages['importformaterror'] = 'インポートできませんでした!  アップロードしたファイルは正しいデータをインポートするファイルではありません。';
$messages['importconfirm'] = '<b>$inserted件の連絡先をインポートしました。</b>';
$messages['importconfirmskipped'] = '<b>$skipped件の既存する連絡先を飛ばしました。</b>';
$messages['importconfirminvalid'] = '<b>$invalid件の無効な連絡先を飛ばしました。</b>';
$messages['importconfirmerrors'] = '<b>$errors件の有効な連絡先のインポートに失敗しました。</b>';
$messages['importmessagesuccess'] = '$nr件のメッセージをインポートしました。';
$messages['importmessageerror'] = 'インポートできませんでした!  アップロードしたファイルは有効なメッセージやメールボックスのファイルではありません。';
$messages['opnotpermitted'] = '許可されていない操作です。';
$messages['nofromaddress'] = '選択した識別情報には電子メールアドレスがありません。';
$messages['editorwarning'] = 'エディターの種類を切り替えるとテキストの書式を失うかもしれません。本当に続けますか?';
$messages['httpreceivedencrypterror'] = '致命的な設定エラーが発生しました。システム管理者に至急連絡してください。<b>メッセージを送信できません。</b>';
$messages['smtpconnerror'] = 'SMTPエラー ($code): サーバーへの接続に失敗しました。';
$messages['smtpautherror'] = 'SMTPエラー ($code): 認証に失敗しました。';
$messages['smtpfromerror'] = 'SMTPエラー ($code): 差出人 "$from" を設定できません ($msg)';
$messages['smtptoerror'] = 'SMTPエラー ($code): 宛先 "$to" を追加できません ($msg)';
$messages['smtprecipientserror'] = 'SMTPエラー: 宛先の一覧を解析できません。';
$messages['smtputf8error'] = 'SMTPエラー: サーバーは電子メールアドレスにUnicodeをサポートしていません。';
$messages['smtpsizeerror'] = 'SMTPエラー: メッセージの大きさがサーバーの制限($limit)を超過';
$messages['smtperror'] = 'SMTP エラー: $msg';
$messages['emailformaterror'] = '誤った電子メールアドレス: $email';
$messages['toomanyrecipients'] = '宛先が多すぎます。$max件以内にしてください。';
$messages['maxgroupmembersreached'] = 'グループのメンバーが多すぎます。$max 件以内にしてください。';
$messages['internalerror'] = '内部エラーが発生しました。もう一度試してください。';
$messages['contactdelerror'] = '連絡先を削除できませんでした。';
$messages['contactdeleted'] = '連絡先を削除しました。';
$messages['contactrestoreerror'] = '削除した連絡先を復元できませんでした。';
$messages['contactrestored'] = '連絡先を復元しました。';
$messages['groupdeleted'] = 'グループを削除しました。';
$messages['grouprenamed'] = 'グループ名を変更しました．';
$messages['groupcreated'] = 'グループを作成しました。';
$messages['savedsearchdeleted'] = '保存した検索情報を削除しました。';
$messages['savedsearchdeleteerror'] = '保存した検索情報を削除できません。';
$messages['savedsearchcreated'] = '検索情報を作成しました。';
$messages['savedsearchcreateerror'] = '検索情報を削除できませんでした。';
$messages['messagedeleted'] = 'メッセージを削除しました。';
$messages['messagemoved'] = 'メッセージを移動しました。';
$messages['messagemovedtotrash'] = 'メッセージをゴミ箱に移動しました。';
$messages['messagecopied'] = 'メッセージをコピーしました。';
$messages['messagemarked'] = 'メッセージにマークを設定しました。';
$messages['autocompletechars'] = '自動補完には少なくとも$min文字入力してください。';
$messages['autocompletemore'] = '多くのエントリーが見つかりました。もっと入力してください。';
$messages['namecannotbeempty'] = '名前は空にできません。';
$messages['nametoolong'] = '名前が長すぎます。';
$messages['namedotforbidden'] = 'フォルダー名はドットで始められません。';
$messages['folderupdated'] = 'フォルダーを更新しました。';
$messages['foldercreated'] = 'フォルダーを作成しました。';
$messages['invalidimageformat'] = '画像の形式が正しくありません。';
$messages['mispellingsfound'] = 'メッセージにスペルミスを見つけました。';
$messages['parentnotwritable'] = '選択した親フォルダーに作成または移動をできませんでした。アクセス権限がありません。';
$messages['messagetoobig'] = 'その処理をするにはメッセージ部分が大きすぎます。';
$messages['attachmentvalidationerror'] = 'ファイルの型とメッセージ中で宣言した型が一致していない、不審な添付ファイルです。送信者を信頼できない場合は、悪意のある内容を含んでいるかもしれないのでブラウザーで開くべきではありません。<br/><br/><em>Expected: $expected; found: $detected</em>';
$messages['noscriptwarning'] = '警告: このウェブメールサービスにはJavascriptが必要です!  使用するにはJavascriptをブラウザーの設定で有効にしてください。';
$messages['messageissent'] = '既にメッセージを送信しましたが、まだ保存していません。今すぐ保存しますか?';
$messages['errnotfound'] = 'ファイルが見つかりません';
$messages['errnotfoundexplain'] = '要求したリソースはみつかりませんでした!';
$messages['errfailedrequest'] = 'リクエストに失敗';
$messages['errauthorizationfailed'] = '認証に失敗';
$messages['errunauthorizedexplain'] = 'このサーバーへのアクセスを認可されていることを検証できませんでした!';
$messages['errrequestcheckfailed'] = 'リクエストの検査に失敗';
$messages['errcsrfprotectionexplain'] = "安全確保のため、このリソースへのアクセスはCSRFに対して保護しています。\nこのメッセージを見た場合は、おそらくウェブ・アプリケーションを終える前にログアウトしていなかったのでしょう。\n続けるには人的な対処が必要です。";
$messages['errcontactserveradmin'] = 'システム管理者に連絡してください。';
$messages['clicktoresumesession'] = 'ここをクリックすると以前のセッションを回復します。';
$messages['errcomposesession'] = 'メッセージを作成するセッションのエラー';
$messages['errcomposesessionexplain'] = 'メッセージを作成するセッションが見つかりません。';
$messages['clicktocompose'] = 'クリックして新しいメッセージを作成';
$messages['nosupporterror'] = 'この機能を使用しているブラウザーはサポートしていません。';
$messages['siginserted'] = '署名を挿入しました。';
$messages['responseinserted'] = '応答を挿入しました。';
$messages['noresponsesavailable'] = '応答なし';
$messages['listempty'] = 'このリストは空です。';
$messages['listusebutton'] = '新しいレコードを追加するには作成のボタンを使用してください。';
$messages['keypaircreatesuccess'] = '$identity用の新しい鍵ペアを作成しました。';
$messages['emptyattachment'] = 'この添付ファイルは空の様です。<br>送信した方に確認をお願いします。';
$messages['oauthloginfailed'] = 'OAuthでログインできませんでした。もう一度試してください。';
$messages['oauthinvalidrequest'] = '認可要求が正しくないか不完全です。';
$messages['oauthaccessdenied'] = '認可サーバーまたはユーザーが要求を拒否しました。';
