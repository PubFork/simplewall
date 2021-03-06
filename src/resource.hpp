#ifndef __RESOURCE_H__
#define __RESOURCE_H__

#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

// Acceleration
#define IDA_MAIN 1

// Menu Id
#define IDM_MAIN 100
#define IDM_TRAY 101
#define IDM_LISTVIEW 102
#define IDM_EDITOR 103

// Dialogs
#define IDD_MAIN 100
#define IDD_EDITOR 101
#define IDD_SETTINGS 102
#define IDD_SETTINGS_GENERAL 103
#define IDD_SETTINGS_INTERFACE 104
#define IDD_SETTINGS_HIGHLIGHTING 105
#define IDD_SETTINGS_RULES 106
#define IDD_SETTINGS_RULES_BLOCKLIST 107
#define IDD_SETTINGS_RULES_SYSTEM 108
#define IDD_SETTINGS_RULES_CUSTOM 109
#define IDD_SETTINGS_LOG 110

// Main Dlg
#define IDC_TAB 104
#define IDC_LISTVIEW 105
#define IDC_START_BTN 106
#define IDC_SETTINGS_BTN 107
#define IDC_EXIT_BTN 108
#define IDC_STATUSBAR 109

// Notification Dlg
#define IDC_ICON_ID 110
#define IDC_TITLE_ID 111
#define IDC_MENU_BTN 112
#define IDC_TIMER_BTN 113
#define IDC_CLOSE_BTN 114
#define IDC_FILE_ID 115
#define IDC_FILE_TEXT 116
#define IDC_SIGNATURE_ID 117
#define IDC_SIGNATURE_TEXT 118
#define IDC_ADDRESS_LOCAL_ID 119
#define IDC_ADDRESS_LOCAL_TEXT 120
#define IDC_ADDRESS_REMOTE_ID 121
#define IDC_ADDRESS_REMOTE_TEXT 122
#define IDC_PROTOCOL_ID 123
#define IDC_PROTOCOL_TEXT 124
#define IDC_FILTER_ID 125
#define IDC_FILTER_TEXT 126
#define IDC_DATE_ID 127
#define IDC_DATE_TEXT 128
#define IDC_CREATERULE_ADDR_ID 129
#define IDC_CREATERULE_PORT_ID 130
#define IDC_DISABLENOTIFICATION_ID 131
#define IDC_PREV_ID 132
#define IDC_NEXT_ID 133
#define IDC_IDX_ID 134
#define IDC_ALLOW_BTN 135
#define IDC_BLOCK_BTN 136
#define IDC_LATER_BTN 137

// Editor Dlg
#define IDC_NAME 138
#define IDC_NAME_EDIT 139
#define IDC_PORTVERSION 140
#define IDC_PORTVERSION_EDIT 141
#define IDC_PROTOCOL 142
#define IDC_PROTOCOL_EDIT 143
#define IDC_DIRECTION 144
#define IDC_DIRECTION_EDIT 145
#define IDC_ACTION 146
#define IDC_ACTION_EDIT 147
#define IDC_RULE_REMOTE 148
#define IDC_RULE_REMOTE_EDIT 149
#define IDC_RULE_LOCAL 150
#define IDC_RULE_LOCAL_EDIT 151
#define IDC_REGION 152
#define IDC_DISABLE_CHK 153
#define IDC_ENABLE_CHK 154
#define IDC_ENABLEFORAPPS_CHK 155
#define IDC_APPS_LV 156

// Settings Dlg
#define IDC_NAV 157
#define IDC_SAVE 158
#define IDC_RESET 159
#define IDC_CLOSE 160
#define IDC_WIKI 161

#define IDC_TITLE_GENERAL 162
#define IDC_TITLE_LANGUAGE 163
#define IDC_TITLE_CONFIRMATIONS 164
#define IDC_TITLE_HIGHLIGHTING 165
#define IDC_TITLE_ADVANCED 166
#define IDC_TITLE_EXPERTS 167
#define IDC_TITLE_LOGGING 168
#define IDC_TITLE_NOTIFICATIONS 169
#define IDS_TITLE_EXCLUDE 1

#define IDC_ALWAYSONTOP_CHK 170
#define IDC_LOADONSTARTUP_CHK 171
#define IDC_STARTMINIMIZED_CHK 172
#define IDC_SKIPUACWARNING_CHK 173
#define IDC_CHECKUPDATES_CHK 174
#define IDC_CHECKUPDATESBETA_CHK 175

#define IDC_LANGUAGE_HINT 176
#define IDC_LANGUAGE 177

#define IDC_CONFIRMEXIT_CHK 178
#define IDC_CONFIRMEXITTIMER_CHK 179
#define IDC_CONFIRMDELETE_CHK 180
#define IDC_CONFIRMLOGCLEAR_CHK 181

#define IDC_COLORS_HINT 182

#define IDC_RULE_ALLOWINBOUND 183
#define IDC_RULE_ALLOWLISTEN 184
#define IDC_RULE_ALLOWLOOPBACK 185
#define IDC_RULE_ALLOW6TO4 186

#define IDC_USESTEALTHMODE_CHK 187
#define IDC_INSTALLBOOTTIMEFILTERS_CHK 188
#define IDC_SECUREFILTERS_CHK 189

#define IDC_USECERTIFICATES_CHK 190
#define IDC_USENETWORKRESOLUTION_CHK 191
#define IDC_USEREFRESHDEVICES_CHK 192

#define IDC_ENABLELOG_CHK 193
#define IDC_LOGPATH 194
#define IDC_LOGPATH_BTN 195

#define IDC_LOGSIZELIMIT_HINT 196
#define IDC_LOGSIZELIMIT_CTRL 197
#define IDC_LOGSIZELIMIT 198

#define IDC_ENABLENOTIFICATIONS_CHK 199
#define IDC_NOTIFICATIONSOUND_CHK 200
#define IDC_NOTIFICATIONDISPLAYTIMEOUT_HINT 201
#define IDC_NOTIFICATIONDISPLAYTIMEOUT_CTRL 202
#define IDC_NOTIFICATIONDISPLAYTIMEOUT 203
#define IDC_NOTIFICATIONTIMEOUT_HINT 204
#define IDC_NOTIFICATIONTIMEOUT_CTRL 205
#define IDC_NOTIFICATIONTIMEOUT 206
#define IDC_EXCLUDE1 207
#define IDC_EXCLUDE2 208
#define IDC_EXCLUDESTEALTH_CHK 209
#define IDC_EXCLUDECLASSIFYALLOW_CHK 210
#define IDC_EXCLUDEBLOCKLIST_CHK 211
#define IDC_EXCLUDECUSTOM_CHK 212

#define IDC_RULES_BLOCKLIST_HINT 213
#define IDC_RULES_SYSTEM_HINT 214
#define IDC_RULES_CUSTOM_HINT 215

#define IDC_COLORS 216
#define IDC_EDITOR 217

// Main Menu
#define IDM_SETTINGS 218
#define IDM_EXIT 219
#define IDM_PURGE_UNUSED 220
#define IDM_PURGE_ERRORS 221
#define IDM_PURGE_TIMERS 222
#define IDM_REFRESH 223
#define IDM_ALWAYSONTOP_CHK 224
#define IDM_SHOWFILENAMESONLY_CHK 225
#define IDM_AUTOSIZECOLUMNS_CHK 226
#define IDM_ENABLESPECIALGROUP_CHK 227
#define IDM_ICONSSMALL 228
#define IDM_ICONSLARGE 229
#define IDM_ICONSEXTRALARGE 230
#define IDM_ICONSISTABLEVIEW 231
#define IDM_ICONSISHIDDEN 232
#define IDM_FONT 233
#define IDM_ENABLELOG_CHK 234
#define IDM_ENABLENOTIFICATIONS_CHK 235
#define IDM_LOGSHOW 236
#define IDM_LOGCLEAR 237
#define IDM_WEBSITE 238
#define IDM_CHECKUPDATES 239
#define IDM_ABOUT 240

// Tray Menu
#define IDM_TRAY_SHOW 241
#define IDM_TRAY_START 242
#define IDM_TRAY_MODEWHITELIST 243
#define IDM_TRAY_MODEBLACKLIST 244
#define IDM_TRAY_ENABLELOG_CHK 245
#define IDM_TRAY_ENABLENOTIFICATIONS_CHK 246
#define IDM_TRAY_LOGSHOW 247
#define IDM_TRAY_LOGCLEAR 248
#define IDM_TRAY_LOGSHOW_ERR 249
#define IDM_TRAY_LOGCLEAR_ERR 250
#define IDM_TRAY_SETTINGS 251
#define IDM_TRAY_WEBSITE 252
#define IDM_TRAY_ABOUT 253
#define IDM_TRAY_EXIT 254

// Listview Menu
#define IDM_INFO 255
#define IDM_ADD_FILE 256
#define IDM_ALL_PROCESSES 257
#define IDM_ALL_PACKAGES 258
#define IDM_ALL_SERVICES 259
#define IDM_REFRESH2 260
#define IDM_DISABLENOTIFICATIONS 261
#define IDM_OPENRULESEDITOR 262
#define IDM_EXPLORE 263
#define IDM_COPY 264
#define IDM_CHECK 265
#define IDM_UNCHECK 266
#define IDM_DISABLETIMER 267
#define IDM_PROPERTIES 268

#define IDM_ADD 269
#define IDM_EDIT 270
#define IDM_DELETE 271

#define IDM_EXPORT_APPS 272
#define IDM_EXPORT_RULES 273
#define IDM_IMPORT_APPS 274
#define IDM_IMPORT_RULES 275

#define IDM_NOTIMER 276

#define IDM_SELECT_ALL 277
#define IDM_ZOOM 278

#define IDX_PROCESS 1000
#define IDX_PACKAGE 2000
#define IDX_SERVICE 3000
#define IDX_LANGUAGE 4000
#define IDX_TIMER 5000
#define IDX_TIMER_NOTIFY 6000
#define IDX_RULES_SPECIAL 7000

// Strings
#define IDS_UPDATE_NO 2
#define IDS_UPDATE_YES 3
#define IDS_FILE 4
#define IDS_SETTINGS 5
#define IDS_EXIT 6
#define IDS_EDIT 7
#define IDS_PURGE_ERRORS 8
#define IDS_PURGE_UNUSED 9
#define IDS_PURGE_TIMERS 10
#define IDS_FIND 11
#define IDS_FINDNEXT 12
#define IDS_REFRESH 13
#define IDS_VIEW 14
#define IDS_ICONS 15
#define IDS_ICONSSMALL 16
#define IDS_ICONSLARGE 17
#define IDS_ICONSISHIDDEN 18
#define IDS_LANGUAGE 19
#define IDS_FONT 20
#define IDS_HELP 21
#define IDS_WEBSITE 22
#define IDS_CHECKUPDATES 23
#define IDS_DONATE 24
#define IDS_ABOUT 25
#define IDS_TRAY_SHOW 26
#define IDS_TRAY_START 27
#define IDS_TRAY_STOP 28
#define IDS_TRAY_MODE 29
#define IDS_TRAY_RULES 30
#define IDS_TRAY_BLOCKLIST_RULES 31
#define IDS_TRAY_SYSTEM_RULES 32
#define IDS_TRAY_USER_RULES 33
#define IDS_TRAY_LOG 34
#define IDS_TRAY_LOGERR 35
#define IDS_ADD_FILE 36
#define IDS_ADD_PROCESS 37
#define IDS_ADD_PACKAGE 38
#define IDS_ADD_SERVICE 39
#define IDS_ALL 40
#define IDS_DISABLENOTIFICATIONS 41
#define IDS_OPENRULESEDITOR 42
#define IDS_TIMER 43
#define IDS_NOTIMER 44
#define IDS_DISABLETIMER 45
#define IDS_EXPLORE 46
#define IDS_COPY 47
#define IDS_SELECT_ALL 48
#define IDS_CHECK 49
#define IDS_UNCHECK 50
#define IDS_ADD 51
#define IDS_EDIT2 52
#define IDS_DELETE 53
#define IDS_EXPORT 54
#define IDS_IMPORT 55
#define IDS_MODE_WHITELIST 56
#define IDS_MODE_BLACKLIST 57
#define IDS_RULE_ALLOWINBOUND 58
#define IDS_RULE_ALLOWLISTEN 59
#define IDS_RULE_ALLOWLOOPBACK 60
#define IDS_HIGHLIGHT_INVALID 61
#define IDS_HIGHLIGHT_NETWORK 62
#define IDS_HIGHLIGHT_PACKAGE 63
#define IDS_HIGHLIGHT_PICO 64
#define IDS_HIGHLIGHT_SERVICE 65
#define IDS_HIGHLIGHT_SIGNED 66
#define IDS_HIGHLIGHT_SILENT 67
#define IDS_HIGHLIGHT_SPECIAL 68
#define IDS_HIGHLIGHT_SYSTEM 69
#define IDS_HIGHLIGHT_TIMER 70
#define IDS_EDITOR 71
#define IDS_NAME 72
#define IDS_RULE 73
#define IDS_PORTVERSION 74
#define IDS_PROTOCOL 75
#define IDS_DIRECTION 76
#define IDS_ACTION 77
#define IDS_DATE 78
#define IDS_FILEPATH 79
#define IDS_SIGNATURE 80
#define IDS_ADDRESS 81
#define IDS_FILTER 82
#define IDS_NOTES 83
#define IDS_ADDED 84
#define IDS_REGION 85
#define IDS_TIMELEFT 86
#define IDS_SIGN_SIGNED 87
#define IDS_SIGN_UNSIGNED 88
#define IDS_GROUP_ALLOWED 89
#define IDS_GROUP_BLOCKED 90
#define IDS_GROUP_ENABLED 91
#define IDS_GROUP_SPECIAL 92
#define IDS_GROUP_DISABLED 93
#define IDS_DIRECTION_1 94
#define IDS_DIRECTION_2 95
#define IDS_DIRECTION_3 96
#define IDS_ACTION_ALLOW 97
#define IDS_ACTION_BLOCK 98
#define IDS_ACTION_IGNORE 99
#define IDS_RULE_APPLY 100
#define IDS_DISABLE_CHK 101
#define IDS_ENABLE_CHK 102
#define IDS_ENABLEFORAPPS_CHK 103
#define IDS_WIKI 104
#define IDS_SAVE 105
#define IDS_CLOSE 106
#define IDS_SETTINGS_GENERAL 107
#define IDS_TITLE_GENERAL 108
#define IDS_TITLE_LANGUAGE 109
#define IDS_TITLE_CONFIRMATIONS 110
#define IDS_TITLE_INTERFACE 111
#define IDS_TITLE_HIGHLIGHTING 112
#define IDS_TITLE_EXPERTS 113
#define IDS_TITLE_LOGGING 114
#define IDS_TITLE_NOTIFICATIONS 115
#define IDS_TITLE_ADVANCED 116
#define IDS_ALWAYSONTOP_CHK 117
#define IDS_LOADONSTARTUP_CHK 118
#define IDS_STARTMINIMIZED_CHK 119
#define IDS_SHOWFILENAMESONLY_CHK 120
#define IDS_AUTOSIZECOLUMNS_CHK 121
#define IDS_SKIPUACWARNING_CHK 122
#define IDS_CHECKUPDATES_CHK 123
#define IDS_LANGUAGE_HINT 124
#define IDS_USEFULLBLOCKLIST_CHK 125
#define IDS_USEFULLBLOCKLIST_HINT 126
#define IDS_USESTEALTHMODE_CHK 127
#define IDS_USESTEALTHMODE_HINT 128
#define IDS_INSTALLBOOTTIMEFILTERS_CHK 129
#define IDS_INSTALLBOOTTIMEFILTERS_HINT 130
#define IDS_PROXYSUPPORT_CHK 131
#define IDS_PROXYSUPPORT_HINT 132
#define IDS_USEHOSTS_CHK 133
#define IDS_USECERTIFICATES_CHK 134
#define IDS_USENETWORKRESOLUTION_CHK 135
#define IDS_DISABLEWINDOWSFIREWALL_CHK 136
#define IDS_ENABLEWINDOWSFIREWALL_CHK 137
#define IDS_CONFIRMEXIT_CHK 138
#define IDS_CONFIRMEXITTIMER_CHK 139
#define IDS_CONFIRMDELETE_CHK 140
#define IDS_CONFIRMLOGCLEAR_CHK 141
#define IDS_COLORS_HINT 142
#define IDS_ENABLELOG_CHK 143
#define IDS_LOGSHOW 144
#define IDS_LOGCLEAR 145
#define IDS_LOGSIZELIMIT_HINT 146
#define IDS_ENABLENOTIFICATIONS_CHK 147
#define IDS_NOTIFICATIONSOUND_CHK 148
#define IDS_NOTIFICATIONNOBLOCKLIST_CHK 149
#define IDS_NOTIFICATIONDISPLAYTIMEOUT_HINT 150
#define IDS_NOTIFICATIONTIMEOUT_HINT 151
#define IDS_RULES_BLOCKLIST_HINT 152
#define IDS_RULES_SYSTEM_HINT 153
#define IDS_RULES_USER_HINT 154
#define IDS_NOTIFY_CREATERULE_ADDRESS 155
#define IDS_NOTIFY_CREATERULE_PORT 156
#define IDS_NOTIFY_DISABLENOTIFICATIONS 157
#define IDS_NOTIFY_TOOLTIP 158
#define IDS_QUESTION 159
#define IDS_QUESTION_DELETE 160
#define IDS_QUESTION_START 161
#define IDS_QUESTION_STOP 162
#define IDS_QUESTION_MODE 163
#define IDS_QUESTION_EXIT 164
#define IDS_QUESTION_LISTEN 165
#define IDS_QUESTION_EXPERT 166
#define IDS_QUESTION_TIMER 167
#define IDS_QUESTION_TIMERS 168
#define IDS_QUESTION_FLAG_CHK 169
#define IDS_STATUS_TOTAL 170
#define IDS_STATUS_SELECTED 171
#define IDS_STATUS_EMPTY 172
#define IDS_STATUS_ERROR 173
#define IDS_STATUS_SYNTAX_ERROR 174
#define IDS_ADDRESS_LOCAL 175
#define IDS_ADDRESS_REMOTE 176
#define IDS_UPDATE_ERROR 177
#define IDS_CHECKUPDATESBETA_CHK 178
#define IDS_CHECKUPDATES_LANGUAGE 179
#define IDS_CHECKUPDATES_BLOCKLIST 180
#define IDS_UPDATE_DOWNLOAD 181
#define IDS_UPDATE_DONE 182
#define IDS_GROUP_SPECIAL_APPS 183
#define IDS_RULE_ALLOWINBOUND_HINT 184
#define IDS_RULE_ALLOWLISTEN_HINT 185
#define IDS_RULE_ALLOWLOOPBACK_HINT 186
#define IDS_PROPERTIES 187
#define IDS_RESET 188
#define IDS_QUESTION_RESET 189
#define IDS_TITLE_EXCLUSION 190
#define IDS_EXCLUDESTEALTH_CHK 191
#define IDS_EXCLUDEBLOCKLIST_CHK 192
#define IDS_UPDATE_INIT 193
#define IDS_UPDATE_INSTALL 194
#define IDS_EXCLUDECUSTOM_CHK 195
#define IDS_ENABLESPECIALGROUP_CHK 196
#define IDS_EXCLUDECLASSIFYALLOW_CHK 197
#define IDS_STATUS_TIMER_DONE 198
#define IDS_ICONSEXTRALARGE 199
#define IDS_STATUS_UNUSED_APPS 200
#define IDS_STATUS_INVALID_APPS 201
#define IDS_STATUS_TIMER_APPS 202
#define IDS_SECUREFILTERS_CHK 203
#define IDS_SECUREFILTERS_HINT 204
#define IDS_USEREFRESHDEVICES_CHK 205
#define IDS_RULE_ALLOW6TO4 206
#define IDS_RECOMMENDED 207
#define IDS_ICONSISTABLEVIEW 208
#define IDS_ACTION_LATER 209
#define IDS_ACTION_ALLOW_HINT 210
#define IDS_ACTION_BLOCK_HINT 211
#define IDS_ACTION_LATER_HINT 212
#define IDS_RULE_APPLY_2 213

// RC data
#define IDR_RULES_BLOCKLIST 1
#define IDR_RULES_SYSTEM 2

// Icons
#define IDI_MAIN 100
#define IDI_ACTIVE IDI_MAIN
#define IDI_INACTIVE 101
#define IDI_ALLOW 102
#define IDI_BLOCK 103
#define IDI_MENU 104
#define IDI_TIMER 105
#define IDI_CLOSE 106

#endif // __RESOURCE_H__
