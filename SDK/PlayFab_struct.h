// Enum PlayFab.EGameBuildStatus
enum class EGameBuildStatus : uint8 {
	pfenum_Available,
	pfenum_Validating,
	pfenum_InvalidBuildPackage,
	pfenum_Processing,
	pfenum_FailedToProcess,
	pfenum_MAX,
};

// Enum PlayFab.EStatisticResetIntervalOption
enum class EStatisticResetIntervalOption : uint8 {
	pfenum_Never,
	pfenum_Hour,
	pfenum_Day,
	pfenum_Week,
	pfenum_Month,
	pfenum_MAX,
};

// Enum PlayFab.EStatisticAggregationMethod
enum class EStatisticAggregationMethod : uint8 {
	pfenum_Last,
	pfenum_Min,
	pfenum_Max,
	pfenum_Sum,
};

// Enum PlayFab.ERegion
enum class ERegion : uint8 {
	pfenum_USCentral,
	pfenum_USEast,
	pfenum_EUWest,
	pfenum_Singapore,
	pfenum_Japan,
	pfenum_Brazil,
	pfenum_Australia,
	pfenum_MAX,
};

// Enum PlayFab.EPfSourceType
enum class EPfSourceType : uint8 {
	pfenum_Admin,
	pfenum_BackEnd,
	pfenum_GameClient,
	pfenum_GameServer,
	pfenum_Partner,
	pfenum_Custom,
	pfenum_API,
	pfenum_MAX,
};

// Enum PlayFab.EAuthTokenType
enum class EAuthTokenType : uint8 {
	pfenum_Email,
	pfenum_MAX,
};

// Enum PlayFab.ETaskInstanceStatus
enum class ETaskInstanceStatus : uint8 {
	pfenum_Succeeded,
	pfenum_Starting,
	pfenum_InProgress,
	pfenum_Failed,
	pfenum_Aborted,
	pfenum_Stalled,
	pfenum_MAX,
};

// Enum PlayFab.EResolutionOutcome
enum class EResolutionOutcome : uint8 {
	pfenum_Revoke,
	pfenum_Reinstate,
	pfenum_Manual,
	pfenum_MAX,
};

// Enum PlayFab.EPushSetupPlatform
enum class EPushSetupPlatform : uint8 {
	pfenum_GCM,
	pfenum_APNS,
	pfenum_APNS_SANDBOX,
	pfenum_MAX,
};

// Enum PlayFab.EScheduledTaskType
enum class EScheduledTaskType : uint8 {
	pfenum_CloudScript,
	pfenum_ActionsOnPlayerSegment,
	pfenum_CloudScriptAzureFunctions,
	pfenum_InsightsScheduledScaling,
	pfenum_MAX,
};

// Enum PlayFab.EUserDataPermission
enum class EUserDataPermission : uint8 {
	pfenum_Private,
	pfenum_Public,
	pfenum_MAX,
};

// Enum PlayFab.ELoginIdentityProvider
enum class ELoginIdentityProvider : uint8 {
	pfenum_Unknown,
	pfenum_PlayFab,
	pfenum_Custom,
	pfenum_GameCenter,
	pfenum_GooglePlay,
	pfenum_Steam,
	pfenum_XBoxLive,
	pfenum_PSN,
	pfenum_Kongregate,
	pfenum_Facebook,
	pfenum_IOSDevice,
	pfenum_AndroidDevice,
	pfenum_Twitch,
	pfenum_WindowsHello,
	pfenum_GameServer,
	pfenum_CustomServer,
	pfenum_NintendoSwitch,
	pfenum_FacebookInstantGames,
	pfenum_OpenIdConnect,
	pfenum_Apple,
	pfenum_NintendoSwitchAccount,
	pfenum_MAX,
};

// Enum PlayFab.EMatchmakeStatus
enum class EMatchmakeStatus : uint8 {
	pfenum_Complete,
	pfenum_Waiting,
	pfenum_GameNotFound,
	pfenum_NoAvailableSlots,
	pfenum_SessionClosed,
	pfenum_MAX,
};

// Enum PlayFab.ETransactionStatus
enum class ETransactionStatus : uint8 {
	pfenum_CreateCart,
	pfenum_Init,
	pfenum_Approved,
	pfenum_Succeeded,
	pfenum_FailedByProvider,
	pfenum_DisputePending,
	pfenum_RefundPending,
	pfenum_Refunded,
	pfenum_RefundFailed,
	pfenum_ChargedBack,
	pfenum_FailedByUber,
	pfenum_FailedByPlayFab,
	pfenum_Revoked,
	pfenum_TradePending,
	pfenum_Traded,
	pfenum_Upgraded,
	pfenum_StackPending,
	pfenum_Stacked,
	pfenum_Other,
	pfenum_Failed,
	pfenum_MAX,
};

// Enum PlayFab.ECloudScriptRevisionOption
enum class ECloudScriptRevisionOption : uint8 {
	pfenum_Live,
	pfenum_Latest,
	pfenum_Specific,
	pfenum_MAX,
};

// Enum PlayFab.ETradeStatus
enum class ETradeStatus : uint8 {
	pfenum_Invalid,
	pfenum_Opening,
	pfenum_Open,
	pfenum_Accepting,
	pfenum_Accepted,
	pfenum_Filled,
	pfenum_Cancelled,
	pfenum_MAX,
};

// Enum PlayFab.EAdActivity
enum class EAdActivity : uint8 {
	pfenum_Opened,
	pfenum_Closed,
	pfenum_Start,
	pfenum_End,
	pfenum_MAX,
};

// Enum PlayFab.EExperimentType
enum class EExperimentType : uint8 {
	pfenum_Active,
	pfenum_Snapshot,
	pfenum_MAX,
};

// Enum PlayFab.EOperationTypes
enum class EOperationTypes : uint8 {
	pfenum_Created,
	pfenum_Updated,
	pfenum_Deleted,
	pfenum_None,
	pfenum_MAX,
};

// Enum PlayFab.EAzureVmSize
enum class EAzureVmSize : uint8 {
	pfenum_Standard_A1,
	pfenum_Standard_A2,
	pfenum_Standard_A3,
	pfenum_Standard_A4,
	pfenum_Standard_A1_v2,
	pfenum_Standard_A2_v2,
	pfenum_Standard_A4_v2,
	pfenum_Standard_A8_v2,
	pfenum_Standard_D1_v2,
	pfenum_Standard_D2_v2,
	pfenum_Standard_D3_v2,
	pfenum_Standard_D4_v2,
	pfenum_Standard_D5_v2,
	pfenum_Standard_D2_v3,
	pfenum_Standard_D4_v3,
	pfenum_Standard_D8_v3,
	pfenum_Standard_D16_v3,
	pfenum_Standard_F1,
	pfenum_Standard_F2,
	pfenum_Standard_F4,
	pfenum_Standard_F8,
	pfenum_Standard_F16,
	pfenum_Standard_F2s_v2,
	pfenum_Standard_F4s_v2,
	pfenum_Standard_F8s_v2,
	pfenum_Standard_F16s_v2,
	pfenum_Standard_D2as_v4,
	pfenum_Standard_D4as_v4,
	pfenum_Standard_D8as_v4,
	pfenum_Standard_D16as_v4,
	pfenum_Standard_MAX,
};

// Enum PlayFab.EContainerFlavor
enum class EContainerFlavor : uint8 {
	pfenum_ManagedWindowsServerCore,
	pfenum_CustomLinux,
	pfenum_ManagedWindowsServerCorePreview,
	pfenum_Invalid,
	pfenum_MAX,
};

// Enum PlayFab.ETitleMultiplayerServerEnabledStatus
enum class ETitleMultiplayerServerEnabledStatus : uint8 {
	pfenum_Initializing,
	pfenum_Enabled,
	pfenum_Disabled,
	pfenum_MAX,
};

// Enum PlayFab.EPlayerConnectionState
enum class EPlayerConnectionState : uint8 {
	pfenum_Unassigned,
	pfenum_Connecting,
	pfenum_Participating,
	pfenum_Participated,
	pfenum_MAX,
};

// Enum PlayFab.EGameInstanceState
enum class EGameInstanceState : uint8 {
	pfenum_Open,
	pfenum_Closed,
	pfenum_MAX,
};

// Enum PlayFab.EServerType
enum class EServerType : uint8 {
	pfenum_Container,
	pfenum_Process,
	pfenum_MAX,
};

// Enum PlayFab.EProtocolType
enum class EProtocolType : uint8 {
	pfenum_TCP,
	pfenum_UDP,
	pfenum_MAX,
};

// Enum PlayFab.EOsPlatform
enum class EOsPlatform : uint8 {
	pfenum_Windows,
	pfenum_Linux,
	pfenum_MAX,
};

// Enum PlayFab.ECancellationReason
enum class ECancellationReason : uint8 {
	pfenum_Requested,
	pfenum_Internal,
	pfenum_Timeout,
	pfenum_MAX,
};

// Enum PlayFab.EAzureVmFamily
enum class EAzureVmFamily : uint8 {
	pfenum_A,
	pfenum_Av2,
	pfenum_Dv2,
	pfenum_Dv3,
	pfenum_F,
	pfenum_Fsv2,
	pfenum_Dasv4,
	pfenum_MAX,
};

// Enum PlayFab.EAzureRegion
enum class EAzureRegion : uint8 {
	pfenum_AustraliaEast,
	pfenum_AustraliaSoutheast,
	pfenum_BrazilSouth,
	pfenum_CentralUs,
	pfenum_EastAsia,
	pfenum_EastUs,
	pfenum_EastUs2,
	pfenum_JapanEast,
	pfenum_JapanWest,
	pfenum_NorthCentralUs,
	pfenum_NorthEurope,
	pfenum_SouthCentralUs,
	pfenum_SoutheastAsia,
	pfenum_WestEurope,
	pfenum_WestUs,
	pfenum_ChinaEast2,
	pfenum_ChinaNorth2,
	pfenum_SouthAfricaNorth,
	pfenum_MAX,
};

// Enum PlayFab.EExperimentState
enum class EExperimentState : uint8 {
	pfenum_New,
	pfenum_Started,
	pfenum_Stopped,
	pfenum_Deleted,
	pfenum_MAX,
};

// Enum PlayFab.EAnalysisTaskState
enum class EAnalysisTaskState : uint8 {
	pfenum_Waiting,
	pfenum_ReadyForSubmission,
	pfenum_SubmittingToPipeline,
	pfenum_Running,
	pfenum_Completed,
	pfenum_Failed,
	pfenum_Canceled,
	pfenum_MAX,
};

// Enum PlayFab.ETriggerType
enum class ETriggerType : uint8 {
	pfenum_HTTP,
	pfenum_Queue,
	pfenum_MAX,
};

// Enum PlayFab.EUserOrigination
enum class EUserOrigination : uint8 {
	pfenum_Organic,
	pfenum_Steam,
	pfenum_Google,
	pfenum_Amazon,
	pfenum_Facebook,
	pfenum_Kongregate,
	pfenum_GamersFirst,
	pfenum_Unknown,
	pfenum_IOS,
	pfenum_LoadTest,
	pfenum_Android,
	pfenum_PSN,
	pfenum_GameCenter,
	pfenum_CustomId,
	pfenum_XboxLive,
	pfenum_Parse,
	pfenum_Twitch,
	pfenum_WindowsHello,
	pfenum_ServerCustomId,
	pfenum_NintendoSwitchDeviceId,
	pfenum_FacebookInstantGamesId,
	pfenum_OpenIdConnect,
	pfenum_Apple,
	pfenum_NintendoSwitchAccount,
	pfenum_MAX,
};

// Enum PlayFab.ETitleActivationStatus
enum class ETitleActivationStatus : uint8 {
	pfenum_None,
	pfenum_ActivatedTitleKey,
	pfenum_PendingSteam,
	pfenum_ActivatedSteam,
	pfenum_RevokedSteam,
	pfenum_MAX,
};

// Enum PlayFab.ESubscriptionProviderStatus
enum class ESubscriptionProviderStatus : uint8 {
	pfenum_NoError,
	pfenum_Cancelled,
	pfenum_UnknownError,
	pfenum_BillingError,
	pfenum_ProductUnavailable,
	pfenum_CustomerDidNotAcceptPriceChange,
	pfenum_FreeTrial,
	pfenum_PaymentPending,
	pfenum_MAX,
};

// Enum PlayFab.EStatisticVersionStatus
enum class EStatisticVersionStatus : uint8 {
	pfenum_Active,
	pfenum_SnapshotPending,
	pfenum_Snapshot,
	pfenum_ArchivalPending,
	pfenum_Archived,
	pfenum_MAX,
};

// Enum PlayFab.EStatisticVersionArchivalStatus
enum class EStatisticVersionArchivalStatus : uint8 {
	pfenum_NotScheduled,
	pfenum_Scheduled,
	pfenum_Queued,
	pfenum_InProgress,
	pfenum_Complete,
	pfenum_MAX,
};

// Enum PlayFab.EResultTableNodeType
enum class EResultTableNodeType : uint8 {
	pfenum_ItemId,
	pfenum_TableId,
	pfenum_MAX,
};

// Enum PlayFab.EPushNotificationPlatform
enum class EPushNotificationPlatform : uint8 {
	pfenum_ApplePushNotificationService,
	pfenum_GoogleCloudMessaging,
	pfenum_MAX,
};

// Enum PlayFab.EEmailVerificationStatus
enum class EEmailVerificationStatus : uint8 {
	pfenum_Unverified,
	pfenum_Pending,
	pfenum_Confirmed,
	pfenum_MAX,
};

// Enum PlayFab.EEffectType
enum class EEffectType : uint8 {
	pfenum_Allow,
	pfenum_Deny,
	pfenum_MAX,
};

// Enum PlayFab.ECurrency
enum class ECurrency : uint8 {
	pfenum_AED,
	pfenum_AFN,
	pfenum_ALL,
	pfenum_AMD,
	pfenum_ANG,
	pfenum_AOA,
	pfenum_ARS,
	pfenum_AUD,
	pfenum_AWG,
	pfenum_AZN,
	pfenum_BAM,
	pfenum_BBD,
	pfenum_BDT,
	pfenum_BGN,
	pfenum_BHD,
	pfenum_BIF,
	pfenum_BMD,
	pfenum_BND,
	pfenum_BOB,
	pfenum_BRL,
	pfenum_BSD,
	pfenum_BTN,
	pfenum_BWP,
	pfenum_BYR,
	pfenum_BZD,
	pfenum_CAD,
	pfenum_CDF,
	pfenum_CHF,
	pfenum_CLP,
	pfenum_CNY,
	pfenum_COP,
	pfenum_CRC,
	pfenum_CUC,
	pfenum_CUP,
	pfenum_CVE,
	pfenum_CZK,
	pfenum_DJF,
	pfenum_DKK,
	pfenum_DOP,
	pfenum_DZD,
	pfenum_EGP,
	pfenum_ERN,
	pfenum_ETB,
	pfenum_EUR,
	pfenum_FJD,
	pfenum_FKP,
	pfenum_GBP,
	pfenum_GEL,
	pfenum_GGP,
	pfenum_GHS,
	pfenum_GIP,
	pfenum_GMD,
	pfenum_GNF,
	pfenum_GTQ,
	pfenum_GYD,
	pfenum_HKD,
	pfenum_HNL,
	pfenum_HRK,
	pfenum_HTG,
	pfenum_HUF,
	pfenum_IDR,
	pfenum_ILS,
	pfenum_IMP,
	pfenum_INR,
	pfenum_IQD,
	pfenum_IRR,
	pfenum_ISK,
	pfenum_JEP,
	pfenum_JMD,
	pfenum_JOD,
	pfenum_JPY,
	pfenum_KES,
	pfenum_KGS,
	pfenum_KHR,
	pfenum_KMF,
	pfenum_KPW,
	pfenum_KRW,
	pfenum_KWD,
	pfenum_KYD,
	pfenum_KZT,
	pfenum_LAK,
	pfenum_LBP,
	pfenum_LKR,
	pfenum_LRD,
	pfenum_LSL,
	pfenum_LYD,
	pfenum_MAD,
	pfenum_MDL,
	pfenum_MGA,
	pfenum_MKD,
	pfenum_MMK,
	pfenum_MNT,
	pfenum_MOP,
	pfenum_MRO,
	pfenum_MUR,
	pfenum_MVR,
	pfenum_MWK,
	pfenum_MXN,
	pfenum_MYR,
	pfenum_MZN,
	pfenum_NAD,
	pfenum_NGN,
	pfenum_NIO,
	pfenum_NOK,
	pfenum_NPR,
	pfenum_NZD,
	pfenum_OMR,
	pfenum_PAB,
	pfenum_PEN,
	pfenum_PGK,
	pfenum_PHP,
	pfenum_PKR,
	pfenum_PLN,
	pfenum_PYG,
	pfenum_QAR,
	pfenum_RON,
	pfenum_RSD,
	pfenum_RUB,
	pfenum_RWF,
	pfenum_SAR,
	pfenum_SBD,
	pfenum_SCR,
	pfenum_SDG,
	pfenum_SEK,
	pfenum_SGD,
	pfenum_SHP,
	pfenum_SLL,
	pfenum_SOS,
	pfenum_SPL,
	pfenum_SRD,
	pfenum_STD,
	pfenum_SVC,
	pfenum_SYP,
	pfenum_SZL,
	pfenum_THB,
	pfenum_TJS,
	pfenum_TMT,
	pfenum_TND,
	pfenum_TOP,
	pfenum_TRY,
	pfenum_TTD,
	pfenum_TVD,
	pfenum_TWD,
	pfenum_TZS,
	pfenum_UAH,
	pfenum_UGX,
	pfenum_USD,
	pfenum_UYU,
	pfenum_UZS,
	pfenum_VEF,
	pfenum_VND,
	pfenum_VUV,
	pfenum_WST,
	pfenum_XAF,
	pfenum_XCD,
	pfenum_XDR,
	pfenum_XOF,
	pfenum_XPF,
	pfenum_YER,
	pfenum_ZAR,
	pfenum_ZMW,
	pfenum_ZWD,
	pfenum_MAX,
};

// Enum PlayFab.ECountryCode
enum class ECountryCode : uint8 {
	pfenum_AF,
	pfenum_AX,
	pfenum_AL,
	pfenum_DZ,
	pfenum_AS,
	pfenum_AD,
	pfenum_AO,
	pfenum_AI,
	pfenum_AQ,
	pfenum_AG,
	pfenum_AR,
	pfenum_AM,
	pfenum_AW,
	pfenum_AU,
	pfenum_AT,
	pfenum_AZ,
	pfenum_BS,
	pfenum_BH,
	pfenum_BD,
	pfenum_BB,
	pfenum_BY,
	pfenum_BE,
	pfenum_BZ,
	pfenum_BJ,
	pfenum_BM,
	pfenum_BT,
	pfenum_BO,
	pfenum_BQ,
	pfenum_BA,
	pfenum_BW,
	pfenum_BV,
	pfenum_BR,
	pfenum_IO,
	pfenum_BN,
	pfenum_BG,
	pfenum_BF,
	pfenum_BI,
	pfenum_KH,
	pfenum_CM,
	pfenum_CA,
	pfenum_CV,
	pfenum_KY,
	pfenum_CF,
	pfenum_TD,
	pfenum_CL,
	pfenum_CN,
	pfenum_CX,
	pfenum_CC,
	pfenum_CO,
	pfenum_KM,
	pfenum_CG,
	pfenum_CD,
	pfenum_CK,
	pfenum_CR,
	pfenum_CI,
	pfenum_HR,
	pfenum_CU,
	pfenum_CW,
	pfenum_CY,
	pfenum_CZ,
	pfenum_DK,
	pfenum_DJ,
	pfenum_DM,
	pfenum_DO,
	pfenum_EC,
	pfenum_EG,
	pfenum_SV,
	pfenum_GQ,
	pfenum_ER,
	pfenum_EE,
	pfenum_ET,
	pfenum_FK,
	pfenum_FO,
	pfenum_FJ,
	pfenum_FI,
	pfenum_FR,
	pfenum_GF,
	pfenum_PF,
	pfenum_TF,
	pfenum_GA,
	pfenum_GM,
	pfenum_GE,
	pfenum_DE,
	pfenum_GH,
	pfenum_GI,
	pfenum_GR,
	pfenum_GL,
	pfenum_GD,
	pfenum_GP,
	pfenum_GU,
	pfenum_GT,
	pfenum_GG,
	pfenum_GN,
	pfenum_GW,
	pfenum_GY,
	pfenum_HT,
	pfenum_HM,
	pfenum_VA,
	pfenum_HN,
	pfenum_HK,
	pfenum_HU,
	pfenum_IS,
	pfenum_IN,
	pfenum_ID,
	pfenum_IR,
	pfenum_IQ,
	pfenum_IE,
	pfenum_IM,
	pfenum_IL,
	pfenum_IT,
	pfenum_JM,
	pfenum_JP,
	pfenum_JE,
	pfenum_JO,
	pfenum_KZ,
	pfenum_KE,
	pfenum_KI,
	pfenum_KP,
	pfenum_KR,
	pfenum_KW,
	pfenum_KG,
	pfenum_LA,
	pfenum_LV,
	pfenum_LB,
	pfenum_LS,
	pfenum_LR,
	pfenum_LY,
	pfenum_LI,
	pfenum_LT,
	pfenum_LU,
	pfenum_MO,
	pfenum_MK,
	pfenum_MG,
	pfenum_MW,
	pfenum_MY,
	pfenum_MV,
	pfenum_ML,
	pfenum_MT,
	pfenum_MH,
	pfenum_MQ,
	pfenum_MR,
	pfenum_MU,
	pfenum_YT,
	pfenum_MX,
	pfenum_FM,
	pfenum_MD,
	pfenum_MC,
	pfenum_MN,
	pfenum_ME,
	pfenum_MS,
	pfenum_MA,
	pfenum_MZ,
	pfenum_MM,
	pfenum_NA,
	pfenum_NR,
	pfenum_NP,
	pfenum_NL,
	pfenum_NC,
	pfenum_NZ,
	pfenum_NI,
	pfenum_NE,
	pfenum_NG,
	pfenum_NU,
	pfenum_NF,
	pfenum_MP,
	pfenum_NO,
	pfenum_OM,
	pfenum_PK,
	pfenum_PW,
	pfenum_PS,
	pfenum_PA,
	pfenum_PG,
	pfenum_PY,
	pfenum_PE,
	pfenum_PH,
	pfenum_PN,
	pfenum_PL,
	pfenum_PT,
	pfenum_PR,
	pfenum_QA,
	pfenum_RE,
	pfenum_RO,
	pfenum_RU,
	pfenum_RW,
	pfenum_BL,
	pfenum_SH,
	pfenum_KN,
	pfenum_LC,
	pfenum_MF,
	pfenum_PM,
	pfenum_VC,
	pfenum_WS,
	pfenum_SM,
	pfenum_ST,
	pfenum_SA,
	pfenum_SN,
	pfenum_RS,
	pfenum_SC,
	pfenum_SL,
	pfenum_SG,
	pfenum_SX,
	pfenum_SK,
	pfenum_SI,
	pfenum_SB,
	pfenum_SO,
	pfenum_ZA,
	pfenum_GS,
	pfenum_SS,
	pfenum_ES,
	pfenum_LK,
	pfenum_SD,
	pfenum_SR,
	pfenum_SJ,
	pfenum_SZ,
	pfenum_SE,
	pfenum_CH,
	pfenum_SY,
	pfenum_TW,
	pfenum_TJ,
	pfenum_TZ,
	pfenum_TH,
	pfenum_TL,
	pfenum_TG,
	pfenum_TK,
	pfenum_TO,
	pfenum_TT,
	pfenum_TN,
	pfenum_TR,
	pfenum_TM,
	pfenum_TC,
	pfenum_TV,
	pfenum_UG,
	pfenum_UA,
	pfenum_AE,
	pfenum_GB,
	pfenum_US,
	pfenum_UM,
	pfenum_UY,
	pfenum_UZ,
	pfenum_VU,
	pfenum_VE,
	pfenum_VN,
	pfenum_VG,
	pfenum_VI,
	pfenum_WF,
	pfenum_EH,
	pfenum_YE,
	pfenum_ZM,
	pfenum_ZW,
	pfenum_MAX,
};

// Enum PlayFab.EContinentCode
enum class EContinentCode : uint8 {
	pfenum_AF,
	pfenum_AN,
	pfenum_AS,
	pfenum_EU,
	pfenum_NA,
	pfenum_OC,
	pfenum_SA,
	pfenum_MAX,
};

// Enum PlayFab.EConditionals
enum class EConditionals : uint8 {
	pfenum_Any,
	pfenum_True,
	pfenum_False,
	pfenum_MAX,
};

// Enum PlayFab.EPFJson
enum class EPFJson : uint8 {
	None,
	Null,
	String,
	Number,
	Boolean,
	Array,
	Object,
	EPFJson_MAX,
};

// ScriptStruct PlayFab.PlayFabBaseModel
// Size: 0x40 (Inherited: 0x00)
struct FPlayFabBaseModel {
	struct FPlayFabError responseError; // 0x00(0x38)
	struct UPlayFabJsonObject* responseData; // 0x38(0x08)
};

// ScriptStruct PlayFab.PlayFabError
// Size: 0x38 (Inherited: 0x00)
struct FPlayFabError {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool HasError : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t ErrorCode; // 0x04(0x04)
	struct FString ErrorName; // 0x08(0x10)
	struct FString ErrorMessage; // 0x18(0x10)
	struct FString ErrorDetails; // 0x28(0x10)
};

// ScriptStruct PlayFab.PlayFabResultCommon
// Size: 0x08 (Inherited: 0x00)
struct FPlayFabResultCommon {
	struct UPlayFabJsonObject* Request; // 0x00(0x08)
};

// ScriptStruct PlayFab.AdminEmptyResponse
// Size: 0x08 (Inherited: 0x08)
struct FAdminEmptyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.PlayFabRequestCommon
// Size: 0x08 (Inherited: 0x00)
struct FPlayFabRequestCommon {
	struct UPlayFabAuthenticationContext* AuthenticationContext; // 0x00(0x08)
};

// ScriptStruct PlayFab.AdminAbortTaskInstanceRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	struct FString TaskInstanceId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminAddLocalizedNewsResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminAddLocalizedNewsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminAddLocalizedNewsRequest
// Size: 0x48 (Inherited: 0x08)
struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	struct FString Body; // 0x08(0x10)
	struct FString Language; // 0x18(0x10)
	struct FString NewsId; // 0x28(0x10)
	struct FString Title; // 0x38(0x10)
};

// ScriptStruct PlayFab.AdminAddNewsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminAddNewsResult : FPlayFabResultCommon {
	struct FString NewsId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminAddNewsRequest
// Size: 0x38 (Inherited: 0x08)
struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	struct FString Body; // 0x08(0x10)
	struct FString Timestamp; // 0x18(0x10)
	struct FString Title; // 0x28(0x10)
};

// ScriptStruct PlayFab.AdminAddPlayerTagResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminAddPlayerTagResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminAddPlayerTagRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString TagName; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminAddServerBuildResult
// Size: 0x88 (Inherited: 0x08)
struct FAdminAddServerBuildResult : FPlayFabResultCommon {
	struct FString ActiveRegions; // 0x08(0x10)
	struct FString BuildId; // 0x18(0x10)
	struct FString CommandLineTemplate; // 0x28(0x10)
	struct FString Comment; // 0x38(0x10)
	struct FString ExecutablePath; // 0x48(0x10)
	int32_t MaxGamesPerHost; // 0x58(0x04)
	int32_t MinFreeGameSlots; // 0x5c(0x04)
	enum class EGameBuildStatus Status; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FString Timestamp; // 0x68(0x10)
	struct FString TitleId; // 0x78(0x10)
};

// ScriptStruct PlayFab.AdminAddServerBuildRequest
// Size: 0x60 (Inherited: 0x08)
struct FAdminAddServerBuildRequest : FPlayFabRequestCommon {
	struct FString ActiveRegions; // 0x08(0x10)
	struct FString BuildId; // 0x18(0x10)
	struct FString CommandLineTemplate; // 0x28(0x10)
	struct FString Comment; // 0x38(0x10)
	struct FString ExecutablePath; // 0x48(0x10)
	int32_t MaxGamesPerHost; // 0x58(0x04)
	int32_t MinFreeGameSlots; // 0x5c(0x04)
};

// ScriptStruct PlayFab.AdminModifyUserVirtualCurrencyResult
// Size: 0x30 (Inherited: 0x08)
struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x08(0x04)
	int32_t BalanceChange; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminAddUserVirtualCurrencyRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminBlankResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminBlankResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminAddVirtualCurrencyTypesRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> VirtualCurrencies; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminBanUsersResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminBanUsersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminBanUsersRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Bans; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString ItemId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminCreateTaskResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminCreateTaskResult : FPlayFabResultCommon {
	struct FString TaskId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminCreateActionsOnPlayerSegmentTaskRequest
// Size: 0x48 (Inherited: 0x08)
struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	struct FString Description; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool IsActive : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString Name; // 0x20(0x10)
	struct UPlayFabJsonObject* Parameter; // 0x30(0x08)
	struct FString Schedule; // 0x38(0x10)
};

// ScriptStruct PlayFab.AdminCreateCloudScriptTaskRequest
// Size: 0x48 (Inherited: 0x08)
struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	struct FString Description; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool IsActive : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString Name; // 0x20(0x10)
	struct UPlayFabJsonObject* Parameter; // 0x30(0x08)
	struct FString Schedule; // 0x38(0x10)
};

// ScriptStruct PlayFab.AdminCreateInsightsScheduledScalingTaskRequest
// Size: 0x48 (Inherited: 0x08)
struct FAdminCreateInsightsScheduledScalingTaskRequest : FPlayFabRequestCommon {
	struct FString Description; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool IsActive : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString Name; // 0x20(0x10)
	struct UPlayFabJsonObject* Parameter; // 0x30(0x08)
	struct FString Schedule; // 0x38(0x10)
};

// ScriptStruct PlayFab.AdminCreateOpenIdConnectionRequest
// Size: 0x50 (Inherited: 0x08)
struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	struct FString ClientId; // 0x08(0x10)
	struct FString ClientSecret; // 0x18(0x10)
	struct FString ConnectionId; // 0x28(0x10)
	struct FString IssuerDiscoveryUrl; // 0x38(0x10)
	struct UPlayFabJsonObject* IssuerInformation; // 0x48(0x08)
};

// ScriptStruct PlayFab.AdminCreatePlayerSharedSecretResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	struct FString SecretKey; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminCreatePlayerSharedSecretRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	struct FString FriendlyName; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Statistic; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	enum class EStatisticAggregationMethod AggregationMethod; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString StatisticName; // 0x10(0x10)
	enum class EStatisticResetIntervalOption VersionChangeInterval; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountResult
// Size: 0x28 (Inherited: 0x08)
struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	struct FString JobReceiptId; // 0x08(0x10)
	struct FString TitleIds; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminDeletePlayerResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminDeletePlayerResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminDeletePlayerSharedSecretResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminDeletePlayerSharedSecretResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminDeleteStoreResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminDeleteStoreResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminDeleteTitleResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminDeleteTitleResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminExportMasterPlayerDataResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	struct FString JobReceiptId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetActionsOnPlayersInSegmentTaskInstanceResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Parameter; // 0x08(0x08)
	struct UPlayFabJsonObject* Summary; // 0x10(0x08)
};

// ScriptStruct PlayFab.AdminGetAllSegmentsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Segments; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetCatalogItemsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Catalog; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetCloudScriptRevisionResult
// Size: 0x38 (Inherited: 0x08)
struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	struct FString CreatedAt; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Files; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool IsPublished : 1; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t Revision; // 0x2c(0x04)
	int32_t Version; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct PlayFab.AdminGetCloudScriptTaskInstanceResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Parameter; // 0x08(0x08)
	struct UPlayFabJsonObject* Summary; // 0x10(0x08)
};

// ScriptStruct PlayFab.AdminGetCloudScriptVersionsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Versions; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetContentListResult
// Size: 0x20 (Inherited: 0x08)
struct FAdminGetContentListResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Contents; // 0x08(0x10)
	int32_t ItemCount; // 0x18(0x04)
	int32_t TotalSize; // 0x1c(0x04)
};

// ScriptStruct PlayFab.AdminGetContentUploadUrlResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetDataReportResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetDataReportResult : FPlayFabResultCommon {
	struct FString DownloadUrl; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetMatchmakerGameInfoResult
// Size: 0xb8 (Inherited: 0x08)
struct FAdminGetMatchmakerGameInfoResult : FPlayFabResultCommon {
	struct FString BuildVersion; // 0x08(0x10)
	struct FString EndTime; // 0x18(0x10)
	struct FString LobbyId; // 0x28(0x10)
	struct FString Mode; // 0x38(0x10)
	struct FString Players; // 0x48(0x10)
	enum class ERegion Region; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct FString ServerIPV4Address; // 0x60(0x10)
	struct FString ServerIPV6Address; // 0x70(0x10)
	int32_t ServerPort; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FString ServerPublicDNSName; // 0x88(0x10)
	struct FString StartTime; // 0x98(0x10)
	struct FString TitleId; // 0xa8(0x10)
};

// ScriptStruct PlayFab.AdminGetMatchmakerGameModesResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> GameModes; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayedTitleListResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	struct FString TitleIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerProfileResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* PlayerProfile; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminGetPlayerSegmentsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Segments; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerSharedSecretsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> SharedSecrets; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayersInSegmentResult
// Size: 0x30 (Inherited: 0x08)
struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	struct FString ContinuationToken; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> PlayerProfiles; // 0x18(0x10)
	int32_t ProfilesInSegment; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Statistics; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> StatisticVersions; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerTagsResult
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString Tags; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminGetPolicyResponse
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	struct FString PolicyName; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Statements; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminGetPublisherDataResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminGetRandomResultTablesResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Tables; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminGetServerBuildInfoResult
// Size: 0x78 (Inherited: 0x08)
struct FAdminGetServerBuildInfoResult : FPlayFabResultCommon {
	struct FString ActiveRegions; // 0x08(0x10)
	struct FString BuildId; // 0x18(0x10)
	struct FString Comment; // 0x28(0x10)
	struct FString ErrorMessage; // 0x38(0x10)
	int32_t MaxGamesPerHost; // 0x48(0x04)
	int32_t MinFreeGameSlots; // 0x4c(0x04)
	enum class EGameBuildStatus Status; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FString Timestamp; // 0x58(0x10)
	struct FString TitleId; // 0x68(0x10)
};

// ScriptStruct PlayFab.AdminGetServerBuildUploadURLResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetStoreItemsResult
// Size: 0x48 (Inherited: 0x08)
struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct UPlayFabJsonObject* MarketingData; // 0x18(0x08)
	enum class EPfSourceType Source; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct UPlayFabJsonObject*> Store; // 0x28(0x10)
	struct FString StoreId; // 0x38(0x10)
};

// ScriptStruct PlayFab.AdminGetTaskInstancesResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Summaries; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetTasksResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetTasksResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Tasks; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetTitleDataResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminLookupUserAccountInfoResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* UserInfo; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminGetUserBansResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetUserBansResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetUserDataResult
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetUserDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	int32_t DataVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminGetUserInventoryResult
// Size: 0x38 (Inherited: 0x08)
struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Inventory; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x28(0x08)
	struct UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30(0x08)
};

// ScriptStruct PlayFab.AdminGrantItemsToUsersResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ItemGrantResults; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminIncrementLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* StatisticVersion; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminListOpenIdConnectionResponse
// Size: 0x18 (Inherited: 0x08)
struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Connections; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminListBuildsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminListBuildsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Builds; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminListVirtualCurrencyTypesResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> VirtualCurrencies; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminModifyMatchmakerGameModesResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminModifyMatchmakerGameModesResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminModifyServerBuildResult
// Size: 0x88 (Inherited: 0x08)
struct FAdminModifyServerBuildResult : FPlayFabResultCommon {
	struct FString ActiveRegions; // 0x08(0x10)
	struct FString BuildId; // 0x18(0x10)
	struct FString CommandLineTemplate; // 0x28(0x10)
	struct FString Comment; // 0x38(0x10)
	struct FString ExecutablePath; // 0x48(0x10)
	int32_t MaxGamesPerHost; // 0x58(0x04)
	int32_t MinFreeGameSlots; // 0x5c(0x04)
	enum class EGameBuildStatus Status; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FString Timestamp; // 0x68(0x10)
	struct FString TitleId; // 0x78(0x10)
};

// ScriptStruct PlayFab.AdminRefundPurchaseResponse
// Size: 0x18 (Inherited: 0x08)
struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	struct FString PurchaseStatus; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRemovePlayerTagResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminRemovePlayerTagResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminRemoveServerBuildResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminRemoveServerBuildResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminResetCharacterStatisticsResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminResetCharacterStatisticsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminResetPasswordResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminResetPasswordResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminResetUserStatisticsResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminResetUserStatisticsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminResolvePurchaseDisputeResponse
// Size: 0x18 (Inherited: 0x08)
struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	struct FString PurchaseStatus; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRevokeAllBansForUserResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRevokeBansResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminRevokeBansResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRevokeInventoryResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminRevokeInventoryResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminRevokeInventoryItemsResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Errors; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRunTaskResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminRunTaskResult : FPlayFabResultCommon {
	struct FString TaskInstanceId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminSendAccountRecoveryEmailResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminSendAccountRecoveryEmailResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminUpdateCatalogItemsResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminUpdateCatalogItemsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminSetPlayerSecretResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminSetPlayerSecretResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminSetPublishedRevisionResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminSetPublishedRevisionResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminSetPublisherDataResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminSetPublisherDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminUpdateStoreItemsResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminUpdateStoreItemsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminSetTitleDataResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminSetTitleDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminSetupPushNotificationResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	struct FString ARN; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminUpdateBansResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminUpdateBansResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminUpdateCloudScriptResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	int32_t Revision; // 0x08(0x04)
	int32_t Version; // 0x0c(0x04)
};

// ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminUpdatePlayerSharedSecretResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Statistic; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminUpdatePolicyResponse
// Size: 0x28 (Inherited: 0x08)
struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	struct FString PolicyName; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Statements; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminUpdateRandomResultTablesResult
// Size: 0x08 (Inherited: 0x08)
struct FAdminUpdateRandomResultTablesResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.AdminUpdateUserDataResult
// Size: 0x10 (Inherited: 0x08)
struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameResult
// Size: 0x18 (Inherited: 0x08)
struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	struct FString DisplayName; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminDeleteContentRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	struct FString Key; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	struct FString MetaData; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminDeleteOpenIdConnectionRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	struct FString ConnectionId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminDeletePlayerRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminDeletePlayerSharedSecretRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	struct FString SecretKey; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminDeleteStoreRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString StoreId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminDeleteTaskRequest
// Size: 0x10 (Inherited: 0x08)
struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Identifier; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminDeleteTitleRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminDeleteTitleRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminExportMasterPlayerDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetTaskInstanceRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	struct FString TaskInstanceId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetAllSegmentsRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminGetAllSegmentsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminGetCatalogItemsRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetCloudScriptRevisionRequest
// Size: 0x10 (Inherited: 0x08)
struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x08(0x04)
	int32_t Version; // 0x0c(0x04)
};

// ScriptStruct PlayFab.AdminGetCloudScriptVersionsRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminGetCloudScriptVersionsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminGetContentListRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	struct FString Prefix; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetContentUploadUrlRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	struct FString ContentType; // 0x08(0x10)
	struct FString Key; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminGetDataReportRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	int32_t Day; // 0x08(0x04)
	int32_t Month; // 0x0c(0x04)
	struct FString ReportName; // 0x10(0x10)
	int32_t Year; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlayFab.AdminGetMatchmakerGameInfoRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetMatchmakerGameModesRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	struct FString BuildVersion; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayedTitleListRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenRequest
// Size: 0x20 (Inherited: 0x08)
struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	struct FString Token; // 0x08(0x10)
	enum class EAuthTokenType TokenType; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PlayFab.AdminGetPlayerProfileRequest
// Size: 0x20 (Inherited: 0x08)
struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x18(0x08)
};

// ScriptStruct PlayFab.AdminGetPlayersSegmentsRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerSharedSecretsRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminGetPlayerSharedSecretsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminGetPlayersInSegmentRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	struct FString ContinuationToken; // 0x08(0x10)
	int32_t MaxBatchSize; // 0x18(0x04)
	int32_t SecondsToLive; // 0x1c(0x04)
	struct FString SegmentId; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminGetPlayerStatisticDefinitionsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	struct FString StatisticName; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPlayerTagsRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	struct FString Namespace; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminGetPolicyRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	struct FString PolicyName; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetPublisherDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	struct FString Keys; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetRandomResultTablesRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetServerBuildInfoRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetServerBuildUploadURLRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetStoreItemsRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString StoreId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminGetTaskInstancesRequest
// Size: 0x38 (Inherited: 0x08)
struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	struct FString StartedAtRangeFrom; // 0x08(0x10)
	struct FString StartedAtRangeTo; // 0x18(0x10)
	enum class ETaskInstanceStatus StatusFilter; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct UPlayFabJsonObject* TaskIdentifier; // 0x30(0x08)
};

// ScriptStruct PlayFab.AdminGetTasksRequest
// Size: 0x10 (Inherited: 0x08)
struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Identifier; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminGetTitleDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	struct FString Keys; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminLookupUserAccountInfoRequest
// Size: 0x48 (Inherited: 0x08)
struct FAdminLookupUserAccountInfoRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct FString TitleDisplayName; // 0x28(0x10)
	struct FString Username; // 0x38(0x10)
};

// ScriptStruct PlayFab.AdminGetUserBansRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGetUserDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString Keys; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminGetUserInventoryRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminGrantItemsToUsersRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> ItemGrants; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString CatalogVersion; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	struct FString StatisticName; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminListOpenIdConnectionRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminListOpenIdConnectionRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminListBuildsRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminListBuildsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminListVirtualCurrencyTypesRequest
// Size: 0x08 (Inherited: 0x08)
struct FAdminListVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.AdminModifyMatchmakerGameModesRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	struct FString BuildVersion; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameModes; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminModifyServerBuildRequest
// Size: 0x70 (Inherited: 0x08)
struct FAdminModifyServerBuildRequest : FPlayFabRequestCommon {
	struct FString ActiveRegions; // 0x08(0x10)
	struct FString BuildId; // 0x18(0x10)
	struct FString CommandLineTemplate; // 0x28(0x10)
	struct FString Comment; // 0x38(0x10)
	struct FString ExecutablePath; // 0x48(0x10)
	int32_t MaxGamesPerHost; // 0x58(0x04)
	int32_t MinFreeGameSlots; // 0x5c(0x04)
	struct FString Timestamp; // 0x60(0x10)
};

// ScriptStruct PlayFab.AdminRefundPurchaseRequest
// Size: 0x38 (Inherited: 0x08)
struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	struct FString OrderId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct FString Reason; // 0x28(0x10)
};

// ScriptStruct PlayFab.AdminRemovePlayerTagRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString TagName; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminRemoveServerBuildRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRemoveVirtualCurrencyTypesRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> VirtualCurrencies; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminResetCharacterStatisticsRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminResetPasswordRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	struct FString Password; // 0x08(0x10)
	struct FString Token; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminResetUserStatisticsRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminResolvePurchaseDisputeRequest
// Size: 0x40 (Inherited: 0x08)
struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	struct FString OrderId; // 0x08(0x10)
	enum class EResolutionOutcome Outcome; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString PlayFabId; // 0x20(0x10)
	struct FString Reason; // 0x30(0x10)
};

// ScriptStruct PlayFab.AdminRevokeAllBansForUserRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRevokeBansRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	struct FString BanIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRevokeInventoryItemRequest
// Size: 0x38 (Inherited: 0x08)
struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.AdminRevokeInventoryItemsRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Items; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminRunTaskRequest
// Size: 0x10 (Inherited: 0x08)
struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Identifier; // 0x08(0x08)
};

// ScriptStruct PlayFab.AdminSendAccountRecoveryEmailRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct FString EmailTemplateId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminUpdateCatalogItemsRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Catalog; // 0x08(0x10)
	struct FString CatalogVersion; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool SetAsDefaultCatalog : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.AdminSetPlayerSecretRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	struct FString PlayerSecret; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminSetPublishedRevisionRequest
// Size: 0x10 (Inherited: 0x08)
struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x08(0x04)
	int32_t Version; // 0x0c(0x04)
};

// ScriptStruct PlayFab.AdminSetPublisherDataRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	struct FString Key; // 0x08(0x10)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminUpdateStoreItemsRequest
// Size: 0x40 (Inherited: 0x08)
struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct UPlayFabJsonObject* MarketingData; // 0x18(0x08)
	struct TArray<struct UPlayFabJsonObject*> Store; // 0x20(0x10)
	struct FString StoreId; // 0x30(0x10)
};

// ScriptStruct PlayFab.AdminSetTitleDataRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	struct FString Key; // 0x08(0x10)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminSetupPushNotificationRequest
// Size: 0x40 (Inherited: 0x08)
struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	struct FString Credential; // 0x08(0x10)
	struct FString Key; // 0x18(0x10)
	struct FString Name; // 0x28(0x10)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool OverwriteOldARN : 1; // 0x38(0x01)
	enum class EPushSetupPlatform Platform; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct PlayFab.AdminSubtractUserVirtualCurrencyRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminUpdateBansRequest
// Size: 0x18 (Inherited: 0x08)
struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Bans; // 0x08(0x10)
};

// ScriptStruct PlayFab.AdminUpdateCloudScriptRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	struct FString DeveloperPlayFabId; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Files; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool Publish : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.AdminUpdateOpenIdConnectionRequest
// Size: 0x50 (Inherited: 0x08)
struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	struct FString ClientId; // 0x08(0x10)
	struct FString ClientSecret; // 0x18(0x10)
	struct FString ConnectionId; // 0x28(0x10)
	struct FString IssuerDiscoveryUrl; // 0x38(0x10)
	struct UPlayFabJsonObject* IssuerInformation; // 0x48(0x08)
};

// ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool Disabled : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString FriendlyName; // 0x10(0x10)
	struct FString SecretKey; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	enum class EStatisticAggregationMethod AggregationMethod; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString StatisticName; // 0x10(0x10)
	enum class EStatisticResetIntervalOption VersionChangeInterval; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct PlayFab.AdminUpdatePolicyRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool OverwritePolicy : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString PolicyName; // 0x10(0x10)
	struct TArray<struct UPlayFabJsonObject*> Statements; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminUpdateRandomResultTablesRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Tables; // 0x18(0x10)
};

// ScriptStruct PlayFab.AdminUpdateTaskRequest
// Size: 0x58 (Inherited: 0x08)
struct FAdminUpdateTaskRequest : FPlayFabRequestCommon {
	struct FString Description; // 0x08(0x10)
	struct UPlayFabJsonObject* Identifier; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool IsActive : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString Name; // 0x28(0x10)
	struct UPlayFabJsonObject* Parameter; // 0x38(0x08)
	struct FString Schedule; // 0x40(0x10)
	enum class EScheduledTaskType Type; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct PlayFab.AdminUpdateUserDataRequest
// Size: 0x38 (Inherited: 0x08)
struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	enum class EUserDataPermission Permission; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.AdminUpdateUserInternalDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameRequest
// Size: 0x28 (Inherited: 0x08)
struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	struct FString DisplayName; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.AuthenticationGetEntityTokenResponse
// Size: 0x30 (Inherited: 0x08)
struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString EntityToken; // 0x10(0x10)
	struct FString TokenExpiration; // 0x20(0x10)
};

// ScriptStruct PlayFab.AuthenticationValidateEntityTokenResponse
// Size: 0x20 (Inherited: 0x08)
struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	enum class ELoginIdentityProvider IdentityProvider; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UPlayFabJsonObject* Lineage; // 0x18(0x08)
};

// ScriptStruct PlayFab.AuthenticationGetEntityTokenRequest
// Size: 0x10 (Inherited: 0x08)
struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
};

// ScriptStruct PlayFab.AuthenticationValidateEntityTokenRequest
// Size: 0x18 (Inherited: 0x08)
struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	struct FString EntityToken; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientAcceptTradeResponse
// Size: 0x10 (Inherited: 0x08)
struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Trade; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientAcceptTradeRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	struct FString AcceptedInventoryInstanceIds; // 0x08(0x10)
	struct FString OfferingPlayerId; // 0x18(0x10)
	struct FString TradeId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientAddFriendResult
// Size: 0x10 (Inherited: 0x08)
struct FClientAddFriendResult : FPlayFabResultCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool Created : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct PlayFab.ClientAddFriendRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientAddFriendRequest : FPlayFabRequestCommon {
	struct FString FriendEmail; // 0x08(0x10)
	struct FString FriendPlayFabId; // 0x18(0x10)
	struct FString FriendTitleDisplayName; // 0x28(0x10)
	struct FString FriendUsername; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientAddGenericIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientAddGenericIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientAddGenericIDRequest
// Size: 0x10 (Inherited: 0x08)
struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* GenericId; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientAddOrUpdateContactEmailResult
// Size: 0x08 (Inherited: 0x08)
struct FClientAddOrUpdateContactEmailResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientAddOrUpdateContactEmailRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	struct FString EmailAddress; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientAddSharedGroupMembersResult
// Size: 0x08 (Inherited: 0x08)
struct FClientAddSharedGroupMembersResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientAddSharedGroupMembersRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	struct FString PlayFabIds; // 0x08(0x10)
	struct FString SharedGroupId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientAddUsernamePasswordResult
// Size: 0x18 (Inherited: 0x08)
struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	struct FString Username; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientAddUsernamePasswordRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct FString Password; // 0x18(0x10)
	struct FString Username; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientModifyUserVirtualCurrencyResult
// Size: 0x30 (Inherited: 0x08)
struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x08(0x04)
	int32_t BalanceChange; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientAddUserVirtualCurrencyRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString VirtualCurrency; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationResult
// Size: 0x08 (Inherited: 0x08)
struct FClientAndroidDevicePushNotificationRegistrationResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	struct FString ConfirmationMessage; // 0x08(0x10)
	struct FString DeviceToken; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool SendPushNotificationConfirmation : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.ClientAttributeInstallResult
// Size: 0x08 (Inherited: 0x08)
struct FClientAttributeInstallResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientAttributeInstallRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	struct FString Adid; // 0x08(0x10)
	struct FString Idfa; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientCancelTradeResponse
// Size: 0x10 (Inherited: 0x08)
struct FClientCancelTradeResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Trade; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientCancelTradeRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	struct FString TradeId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientConfirmPurchaseResult
// Size: 0x38 (Inherited: 0x08)
struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Items; // 0x08(0x10)
	struct FString OrderId; // 0x18(0x10)
	struct FString PurchaseDate; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientConfirmPurchaseRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	struct FString OrderId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientConsumeItemResult
// Size: 0x20 (Inherited: 0x08)
struct FClientConsumeItemResult : FPlayFabResultCommon {
	struct FString ItemInstanceId; // 0x08(0x10)
	int32_t RemainingUses; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.ClientConsumeItemRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	int32_t ConsumeCount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString ItemInstanceId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientConsumePSNEntitlementsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ItemsGranted; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientConsumePSNEntitlementsRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	int32_t ServiceLabel; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.ClientConsumeXboxEntitlementsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Items; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientConsumeXboxEntitlementsRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString XboxToken; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientCreateSharedGroupResult
// Size: 0x18 (Inherited: 0x08)
struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	struct FString SharedGroupId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientCreateSharedGroupRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	struct FString SharedGroupId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientExecuteCloudScriptResult
// Size: 0x60 (Inherited: 0x08)
struct FClientExecuteCloudScriptResult : FPlayFabResultCommon {
	int32_t APIRequestsIssued; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* Error; // 0x10(0x08)
	int32_t ExecutionTimeSeconds; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString FunctionName; // 0x20(0x10)
	struct UPlayFabJsonObject* FunctionResult; // 0x30(0x08)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool FunctionResultTooLarge : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t HttpRequestsIssued; // 0x3c(0x04)
	struct TArray<struct UPlayFabJsonObject*> Logs; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool LogsTooLarge : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t MemoryConsumedBytes; // 0x54(0x04)
	int32_t ProcessorTimeSeconds; // 0x58(0x04)
	int32_t Revision; // 0x5c(0x04)
};

// ScriptStruct PlayFab.ClientGetAccountInfoResult
// Size: 0x10 (Inherited: 0x08)
struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* AccountInfo; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientGetAdPlacementsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetAdPlacementsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> AdPlacements; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientListUsersCharactersResult
// Size: 0x18 (Inherited: 0x08)
struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Characters; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetCatalogItemsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Catalog; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetCharacterDataResult
// Size: 0x28 (Inherited: 0x08)
struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* Data; // 0x18(0x08)
	int32_t DataVersion; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlayFab.ClientGetCharacterInventoryResult
// Size: 0x38 (Inherited: 0x08)
struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Inventory; // 0x18(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x28(0x08)
	struct UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30(0x08)
};

// ScriptStruct PlayFab.ClientGetCharacterLeaderboardResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetCharacterStatisticsResult
// Size: 0x10 (Inherited: 0x08)
struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* CharacterStatistics; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientGetContentDownloadUrlResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientCurrentGamesResult
// Size: 0x28 (Inherited: 0x08)
struct FClientCurrentGamesResult : FPlayFabResultCommon {
	int32_t GameCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> Games; // 0x10(0x10)
	int32_t PlayerCount; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlayFab.ClientGetLeaderboardResult
// Size: 0x30 (Inherited: 0x08)
struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
	struct FString NextReset; // 0x18(0x10)
	int32_t Version; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerResult
// Size: 0x30 (Inherited: 0x08)
struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
	struct FString NextReset; // 0x18(0x10)
	int32_t Version; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ClientGetFriendsListResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetFriendsListResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Friends; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGameServerRegionsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Regions; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerResult
// Size: 0x30 (Inherited: 0x08)
struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
	struct FString NextReset; // 0x18(0x10)
	int32_t Version; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPaymentTokenResult
// Size: 0x28 (Inherited: 0x08)
struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	struct FString OrderId; // 0x08(0x10)
	struct FString ProviderToken; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	struct FString PhotonCustomAuthenticationToken; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerCombinedInfoResult
// Size: 0x20 (Inherited: 0x08)
struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* InfoResultPayload; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerProfileResult
// Size: 0x10 (Inherited: 0x08)
struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* PlayerProfile; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientGetPlayerSegmentsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Segments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerStatisticsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Statistics; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> StatisticVersions; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerTagsResult
// Size: 0x28 (Inherited: 0x08)
struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString Tags; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerTradesResponse
// Size: 0x28 (Inherited: 0x08)
struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> AcceptedTrades; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> OpenedTrades; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPublisherDataResult
// Size: 0x10 (Inherited: 0x08)
struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientGetPurchaseResult
// Size: 0x58 (Inherited: 0x08)
struct FClientGetPurchaseResult : FPlayFabResultCommon {
	struct FString OrderId; // 0x08(0x10)
	struct FString PaymentProvider; // 0x18(0x10)
	struct FString PurchaseDate; // 0x28(0x10)
	struct FString TransactionId; // 0x38(0x10)
	struct FString TransactionStatus; // 0x48(0x10)
};

// ScriptStruct PlayFab.ClientGetSharedGroupDataResult
// Size: 0x20 (Inherited: 0x08)
struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString Members; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientGetStoreItemsResult
// Size: 0x48 (Inherited: 0x08)
struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct UPlayFabJsonObject* MarketingData; // 0x18(0x08)
	enum class EPfSourceType Source; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct UPlayFabJsonObject*> Store; // 0x28(0x10)
	struct FString StoreId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientGetTimeResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetTimeResult : FPlayFabResultCommon {
	struct FString Time; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetTitleDataResult
// Size: 0x10 (Inherited: 0x08)
struct FClientGetTitleDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientGetTitleNewsResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> News; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetTitlePublicKeyResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	struct FString RSAPublicKey; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetTradeStatusResponse
// Size: 0x10 (Inherited: 0x08)
struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Trade; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientGetUserDataResult
// Size: 0x18 (Inherited: 0x08)
struct FClientGetUserDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	int32_t DataVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct PlayFab.ClientGetUserInventoryResult
// Size: 0x28 (Inherited: 0x08)
struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Inventory; // 0x08(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x18(0x08)
	struct UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20(0x08)
};

// ScriptStruct PlayFab.ClientGetWindowsHelloChallengeResponse
// Size: 0x18 (Inherited: 0x08)
struct FClientGetWindowsHelloChallengeResponse : FPlayFabResultCommon {
	struct FString Challenge; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGrantCharacterToUserResult
// Size: 0x30 (Inherited: 0x08)
struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString CharacterType; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool Result : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.ClientLinkAndroidDeviceIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkAndroidDeviceIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientEmptyResult
// Size: 0x08 (Inherited: 0x08)
struct FClientEmptyResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkCustomIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkCustomIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkFacebookAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkFacebookAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkFacebookInstantGamesIdResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkGameCenterAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkGameCenterAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkGoogleAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkGoogleAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkIOSDeviceIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkIOSDeviceIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkKongregateAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkKongregateAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkNintendoSwitchDeviceIdResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkPSNAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkPSNAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkSteamAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkSteamAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkTwitchAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkTwitchAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkWindowsHelloAccountResponse
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkWindowsHelloAccountResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientLinkXboxAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientLinkXboxAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.PlayFabLoginResultCommon
// Size: 0x10 (Inherited: 0x08)
struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	struct UPlayFabAuthenticationContext* AuthenticationContext; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientLoginResult
// Size: 0x68 (Inherited: 0x10)
struct FClientLoginResult : FPlayFabLoginResultCommon {
	struct UPlayFabJsonObject* EntityToken; // 0x10(0x08)
	struct UPlayFabJsonObject* InfoResultPayload; // 0x18(0x08)
	struct FString LastLoginTime; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool NewlyCreated : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FString PlayFabId; // 0x38(0x10)
	struct FString SessionTicket; // 0x48(0x10)
	struct UPlayFabJsonObject* SettingsForUser; // 0x58(0x08)
	struct UPlayFabJsonObject* TreatmentAssignment; // 0x60(0x08)
};

// ScriptStruct PlayFab.ClientMatchmakeResult
// Size: 0x80 (Inherited: 0x08)
struct FClientMatchmakeResult : FPlayFabResultCommon {
	struct FString Expires; // 0x08(0x10)
	struct FString LobbyId; // 0x18(0x10)
	int32_t PollWaitTimeMS; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString ServerIPV4Address; // 0x30(0x10)
	struct FString ServerIPV6Address; // 0x40(0x10)
	int32_t ServerPort; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FString ServerPublicDNSName; // 0x58(0x10)
	enum class EMatchmakeStatus Status; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FString Ticket; // 0x70(0x10)
};

// ScriptStruct PlayFab.ClientOpenTradeResponse
// Size: 0x10 (Inherited: 0x08)
struct FClientOpenTradeResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Trade; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientPayForPurchaseResult
// Size: 0x78 (Inherited: 0x08)
struct FClientPayForPurchaseResult : FPlayFabResultCommon {
	int32_t CreditApplied; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString OrderId; // 0x10(0x10)
	struct FString ProviderData; // 0x20(0x10)
	struct FString ProviderToken; // 0x30(0x10)
	struct FString PurchaseConfirmationPageURL; // 0x40(0x10)
	struct FString PurchaseCurrency; // 0x50(0x10)
	int32_t PurchasePrice; // 0x60(0x04)
	enum class ETransactionStatus Status; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	struct UPlayFabJsonObject* VCAmount; // 0x68(0x08)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x70(0x08)
};

// ScriptStruct PlayFab.ClientPurchaseItemResult
// Size: 0x18 (Inherited: 0x08)
struct FClientPurchaseItemResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Items; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientRedeemCouponResult
// Size: 0x18 (Inherited: 0x08)
struct FClientRedeemCouponResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> GrantedItems; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientEmptyResponse
// Size: 0x08 (Inherited: 0x08)
struct FClientEmptyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationResult
// Size: 0x08 (Inherited: 0x08)
struct FClientRegisterForIOSPushNotificationResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientRegisterPlayFabUserResult
// Size: 0x48 (Inherited: 0x08)
struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* EntityToken; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString SessionTicket; // 0x20(0x10)
	struct UPlayFabJsonObject* SettingsForUser; // 0x30(0x08)
	struct FString Username; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientRemoveContactEmailResult
// Size: 0x08 (Inherited: 0x08)
struct FClientRemoveContactEmailResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientRemoveFriendResult
// Size: 0x08 (Inherited: 0x08)
struct FClientRemoveFriendResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientRemoveGenericIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientRemoveGenericIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientRemoveSharedGroupMembersResult
// Size: 0x08 (Inherited: 0x08)
struct FClientRemoveSharedGroupMembersResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientReportAdActivityResult
// Size: 0x08 (Inherited: 0x08)
struct FClientReportAdActivityResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientReportPlayerClientResult
// Size: 0x10 (Inherited: 0x08)
struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ClientRestoreIOSPurchasesResult
// Size: 0x18 (Inherited: 0x08)
struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Fulfillments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientRewardAdActivityResult
// Size: 0x58 (Inherited: 0x08)
struct FClientRewardAdActivityResult : FPlayFabResultCommon {
	struct FString AdActivityEventId; // 0x08(0x10)
	struct FString DebugResults; // 0x18(0x10)
	struct FString PlacementId; // 0x28(0x10)
	struct FString PlacementName; // 0x38(0x10)
	int32_t PlacementViewsRemaining; // 0x48(0x04)
	int32_t PlacementViewsResetMinutes; // 0x4c(0x04)
	struct UPlayFabJsonObject* RewardResults; // 0x50(0x08)
};

// ScriptStruct PlayFab.ClientSendAccountRecoveryEmailResult
// Size: 0x08 (Inherited: 0x08)
struct FClientSendAccountRecoveryEmailResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientSetFriendTagsResult
// Size: 0x08 (Inherited: 0x08)
struct FClientSetFriendTagsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientSetPlayerSecretResult
// Size: 0x08 (Inherited: 0x08)
struct FClientSetPlayerSecretResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientStartGameResult
// Size: 0x80 (Inherited: 0x08)
struct FClientStartGameResult : FPlayFabResultCommon {
	struct FString Expires; // 0x08(0x10)
	struct FString LobbyId; // 0x18(0x10)
	struct FString Password; // 0x28(0x10)
	struct FString ServerIPV4Address; // 0x38(0x10)
	struct FString ServerIPV6Address; // 0x48(0x10)
	int32_t ServerPort; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString ServerPublicDNSName; // 0x60(0x10)
	struct FString Ticket; // 0x70(0x10)
};

// ScriptStruct PlayFab.ClientStartPurchaseResult
// Size: 0x40 (Inherited: 0x08)
struct FClientStartPurchaseResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Contents; // 0x08(0x10)
	struct FString OrderId; // 0x18(0x10)
	struct TArray<struct UPlayFabJsonObject*> PaymentOptions; // 0x28(0x10)
	struct UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38(0x08)
};

// ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkAndroidDeviceIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkCustomIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkCustomIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkFacebookAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkFacebookAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkFacebookInstantGamesIdResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkGameCenterAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkGameCenterAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkGoogleAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkGoogleAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkIOSDeviceIDResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkKongregateAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkKongregateAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkNintendoSwitchDeviceIdResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkPSNAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkPSNAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkSteamAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkSteamAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkTwitchAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkTwitchAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkWindowsHelloAccountResponse
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkWindowsHelloAccountResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlinkXboxAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkXboxAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUnlockContainerItemResult
// Size: 0x40 (Inherited: 0x08)
struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> GrantedItems; // 0x08(0x10)
	struct FString UnlockedItemInstanceId; // 0x18(0x10)
	struct FString UnlockedWithItemInstanceId; // 0x28(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x38(0x08)
};

// ScriptStruct PlayFab.ClientUpdateCharacterDataResult
// Size: 0x10 (Inherited: 0x08)
struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ClientUpdateCharacterStatisticsResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUpdateCharacterStatisticsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUpdatePlayerStatisticsResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUpdatePlayerStatisticsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUpdateSharedGroupDataResult
// Size: 0x08 (Inherited: 0x08)
struct FClientUpdateSharedGroupDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ClientUpdateUserDataResult
// Size: 0x10 (Inherited: 0x08)
struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameResult
// Size: 0x18 (Inherited: 0x08)
struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	struct FString DisplayName; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientValidateAmazonReceiptResult
// Size: 0x18 (Inherited: 0x08)
struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Fulfillments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseResult
// Size: 0x18 (Inherited: 0x08)
struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Fulfillments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientValidateIOSReceiptResult
// Size: 0x18 (Inherited: 0x08)
struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Fulfillments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientValidateWindowsReceiptResult
// Size: 0x18 (Inherited: 0x08)
struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Fulfillments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientWriteEventResponse
// Size: 0x18 (Inherited: 0x08)
struct FClientWriteEventResponse : FPlayFabResultCommon {
	struct FString EventId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientExecuteCloudScriptRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	struct FString FunctionName; // 0x08(0x10)
	struct UPlayFabJsonObject* FunctionParameter; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool GeneratePlayStreamEvent : 1; // 0x20(0x01)
	enum class ECloudScriptRevisionOption RevisionSelection; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
	int32_t SpecificRevision; // 0x24(0x04)
};

// ScriptStruct PlayFab.ClientGetAccountInfoRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct FString TitleDisplayName; // 0x28(0x10)
	struct FString Username; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientGetAdPlacementsRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientGetAdPlacementsRequest : FPlayFabRequestCommon {
	struct FString AppId; // 0x08(0x10)
	struct UPlayFabJsonObject* Identifier; // 0x18(0x08)
};

// ScriptStruct PlayFab.ClientListUsersCharactersRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetCatalogItemsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetCharacterDataRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	int32_t IfChangedFromDataVersion; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString Keys; // 0x20(0x10)
	struct FString PlayFabId; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientGetCharacterInventoryRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetCharacterLeaderboardRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	struct FString CharacterType; // 0x08(0x10)
	int32_t MaxResultsCount; // 0x18(0x04)
	int32_t StartPosition; // 0x1c(0x04)
	struct FString StatisticName; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientGetCharacterStatisticsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetContentDownloadUrlRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	struct FString HttpMethod; // 0x08(0x10)
	struct FString Key; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool ThruCDN : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.ClientCurrentGamesRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	struct FString BuildVersion; // 0x08(0x10)
	struct FString GameMode; // 0x18(0x10)
	enum class ERegion Region; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString StatisticName; // 0x30(0x10)
	struct UPlayFabJsonObject* TagFilter; // 0x40(0x08)
};

// ScriptStruct PlayFab.ClientGetFriendLeaderboardRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IncludeFacebookFriends : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool IncludeSteamFriends : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t MaxResultsCount; // 0x0c(0x04)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x10(0x08)
	int32_t StartPosition; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString StatisticName; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool UseSpecificVersion : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t Version; // 0x34(0x04)
	struct FString XboxToken; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerRequest
// Size: 0x50 (Inherited: 0x08)
struct FClientGetFriendLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IncludeFacebookFriends : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool IncludeSteamFriends : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t MaxResultsCount; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x20(0x08)
	struct FString StatisticName; // 0x28(0x10)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool UseSpecificVersion : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t Version; // 0x3c(0x04)
	struct FString XboxToken; // 0x40(0x10)
};

// ScriptStruct PlayFab.ClientGetFriendsListRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IncludeFacebookFriends : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool IncludeSteamFriends : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x10(0x08)
	struct FString XboxToken; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGameServerRegionsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	struct FString BuildVersion; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetLeaderboardRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientGetLeaderboardRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x10(0x08)
	int32_t StartPosition; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString StatisticName; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool UseSpecificVersion : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t Version; // 0x34(0x04)
};

// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString CharacterType; // 0x18(0x10)
	int32_t MaxResultsCount; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString StatisticName; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientGetLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x20(0x08)
	struct FString StatisticName; // 0x28(0x10)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool UseSpecificVersion : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t Version; // 0x3c(0x04)
};

// ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString StatisticName; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientGetPaymentTokenRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	struct FString TokenProvider; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	struct FString PhotonApplicationId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerCombinedInfoRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerProfileRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x18(0x08)
};

// ScriptStruct PlayFab.ClientGetPlayerSegmentsRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientGetPlayerSegmentsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientGetPlayerStatisticsRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	struct FString StatisticNames; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> StatisticNameVersions; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	struct FString StatisticName; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerTagsRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	struct FString Namespace; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayerTradesRequest
// Size: 0x10 (Inherited: 0x08)
struct FClientGetPlayerTradesRequest : FPlayFabRequestCommon {
	enum class ETradeStatus StatusFilter; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	struct FString FacebookIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	struct FString FacebookInstantGamesIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	struct FString GameCenterIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> GenericIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	struct FString GoogleIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	struct FString KongregateIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	struct FString NintendoSwitchDeviceIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PSNAccountIDs; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	struct FString SteamStringIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	struct FString TwitchIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	struct FString Sandbox; // 0x08(0x10)
	struct FString XboxLiveAccountIDs; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetPublisherDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	struct FString Keys; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetPurchaseRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	struct FString OrderId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetSharedGroupDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool GetMembers : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString Keys; // 0x10(0x10)
	struct FString SharedGroupId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientGetStoreItemsRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString StoreId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetTimeRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientGetTimeRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientGetTitleDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	struct FString Keys; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetTitleNewsRequest
// Size: 0x10 (Inherited: 0x08)
struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ClientGetTitlePublicKeyRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	struct FString TitleSharedSecret; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGetTradeStatusRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	struct FString OfferingPlayerId; // 0x08(0x10)
	struct FString TradeId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientGetUserDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString Keys; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientGetUserInventoryRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientGetUserInventoryRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientGetWindowsHelloChallengeRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientGetWindowsHelloChallengeRequest : FPlayFabRequestCommon {
	struct FString PublicKeyHint; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientGrantCharacterToUserRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterName; // 0x18(0x10)
	struct FString ItemId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientLinkAndroidDeviceIDRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	struct FString AndroidDevice; // 0x08(0x10)
	struct FString AndroidDeviceId; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool ForceLink : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString OS; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientLinkAppleRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkAppleRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString IdentityToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientLinkCustomIDRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	struct FString CustomId; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PlayFab.ClientLinkFacebookAccountRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	struct FString AccessToken; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	struct FString FacebookInstantGamesSignature; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PlayFab.ClientLinkGameCenterAccountRequest
// Size: 0x60 (Inherited: 0x08)
struct FClientLinkGameCenterAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString GameCenterId; // 0x10(0x10)
	struct FString PublicKeyUrl; // 0x20(0x10)
	struct FString Salt; // 0x30(0x10)
	struct FString Signature; // 0x40(0x10)
	struct FString Timestamp; // 0x50(0x10)
};

// ScriptStruct PlayFab.ClientLinkGoogleAccountRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString ServerAuthCode; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientLinkIOSDeviceIDRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	struct FString DeviceID; // 0x08(0x10)
	struct FString DeviceModel; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool ForceLink : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString OS; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientLinkKongregateAccountRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	struct FString AuthTicket; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString KongregateId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientLinkNintendoAccountRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkNintendoAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString IdentityToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString NintendoSwitchDeviceId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientLinkOpenIdConnectRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	struct FString ConnectionId; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString IdToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientLinkPSNAccountRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	struct FString AuthCode; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t IssuerId; // 0x1c(0x04)
	struct FString RedirectUri; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientLinkSteamAccountRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString SteamTicket; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientLinkTwitchAccountRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	struct FString AccessToken; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PlayFab.ClientLinkWindowsHelloAccountRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientLinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	struct FString DeviceName; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString PublicKey; // 0x20(0x10)
	struct FString Username; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientLinkXboxAccountRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString XboxToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithAndroidDeviceIDRequest
// Size: 0x68 (Inherited: 0x08)
struct FClientLoginWithAndroidDeviceIDRequest : FPlayFabRequestCommon {
	struct FString AndroidDevice; // 0x08(0x10)
	struct FString AndroidDeviceId; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool CreateAccount : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString EncryptedRequest; // 0x30(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x40(0x08)
	struct FString OS; // 0x48(0x10)
	struct FString PlayerSecret; // 0x58(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithAppleRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithAppleRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct FString IdentityToken; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithCustomIDRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithCustomIDRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString CustomId; // 0x10(0x10)
	struct FString EncryptedRequest; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithEmailAddressRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x18(0x08)
	struct FString Password; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithFacebookRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	struct FString AccessToken; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool CreateAccount : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString EncryptedRequest; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithFacebookInstantGamesIdRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct FString FacebookInstantGamesSignature; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithGameCenterRequest
// Size: 0x88 (Inherited: 0x08)
struct FClientLoginWithGameCenterRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x20(0x08)
	struct FString PlayerId; // 0x28(0x10)
	struct FString PlayerSecret; // 0x38(0x10)
	struct FString PublicKeyUrl; // 0x48(0x10)
	struct FString Salt; // 0x58(0x10)
	struct FString Signature; // 0x68(0x10)
	struct FString Timestamp; // 0x78(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithGoogleAccountRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x20(0x08)
	struct FString PlayerSecret; // 0x28(0x10)
	struct FString ServerAuthCode; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithIOSDeviceIDRequest
// Size: 0x68 (Inherited: 0x08)
struct FClientLoginWithIOSDeviceIDRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString DeviceID; // 0x10(0x10)
	struct FString DeviceModel; // 0x20(0x10)
	struct FString EncryptedRequest; // 0x30(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x40(0x08)
	struct FString OS; // 0x48(0x10)
	struct FString PlayerSecret; // 0x58(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithKongregateRequest
// Size: 0x58 (Inherited: 0x08)
struct FClientLoginWithKongregateRequest : FPlayFabRequestCommon {
	struct FString AuthTicket; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool CreateAccount : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString EncryptedRequest; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString KongregateId; // 0x38(0x10)
	struct FString PlayerSecret; // 0x48(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithNintendoAccountRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithNintendoAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct FString IdentityToken; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithNintendoSwitchDeviceIdRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x20(0x08)
	struct FString NintendoSwitchDeviceId; // 0x28(0x10)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithOpenIdConnectRequest
// Size: 0x58 (Inherited: 0x08)
struct FClientLoginWithOpenIdConnectRequest : FPlayFabRequestCommon {
	struct FString ConnectionId; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool CreateAccount : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString EncryptedRequest; // 0x20(0x10)
	struct FString IdToken; // 0x30(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x40(0x08)
	struct FString PlayerSecret; // 0x48(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithPlayFabRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x08(0x08)
	struct FString Password; // 0x10(0x10)
	struct FString Username; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithPSNRequest
// Size: 0x60 (Inherited: 0x08)
struct FClientLoginWithPSNRequest : FPlayFabRequestCommon {
	struct FString AuthCode; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool CreateAccount : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString EncryptedRequest; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	int32_t IssuerId; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FString PlayerSecret; // 0x40(0x10)
	struct FString RedirectUri; // 0x50(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithSteamRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x20(0x08)
	struct FString PlayerSecret; // 0x28(0x10)
	struct FString SteamTicket; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithTwitchRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	struct FString AccessToken; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool CreateAccount : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString EncryptedRequest; // 0x20(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x30(0x08)
	struct FString PlayerSecret; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithWindowsHelloRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientLoginWithWindowsHelloRequest : FPlayFabRequestCommon {
	struct FString ChallengeSignature; // 0x08(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x18(0x08)
	struct FString PublicKeyHint; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientLoginWithXboxRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString EncryptedRequest; // 0x10(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x20(0x08)
	struct FString PlayerSecret; // 0x28(0x10)
	struct FString XboxToken; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientMatchmakeRequest
// Size: 0x68 (Inherited: 0x08)
struct FClientMatchmakeRequest : FPlayFabRequestCommon {
	struct FString BuildVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString GameMode; // 0x28(0x10)
	struct FString LobbyId; // 0x38(0x10)
	enum class ERegion Region; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool StartNewIfNoneFound : 1; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
	struct FString StatisticName; // 0x50(0x10)
	struct UPlayFabJsonObject* TagFilter; // 0x60(0x08)
};

// ScriptStruct PlayFab.ClientOpenTradeRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	struct FString AllowedPlayerIds; // 0x08(0x10)
	struct FString OfferedInventoryInstanceIds; // 0x18(0x10)
	struct FString RequestedCatalogItemIds; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientPayForPurchaseRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	struct FString Currency; // 0x08(0x10)
	struct FString OrderId; // 0x18(0x10)
	struct FString ProviderName; // 0x28(0x10)
	struct FString ProviderTransactionId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientPurchaseItemRequest
// Size: 0x60 (Inherited: 0x08)
struct FClientPurchaseItemRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString ItemId; // 0x28(0x10)
	int32_t Price; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FString StoreId; // 0x40(0x10)
	struct FString VirtualCurrency; // 0x50(0x10)
};

// ScriptStruct PlayFab.ClientRedeemCouponRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString CouponCode; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientRefreshPSNAuthTokenRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	struct FString AuthCode; // 0x08(0x10)
	int32_t IssuerId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString RedirectUri; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	struct FString ConfirmationMessage; // 0x08(0x10)
	struct FString DeviceToken; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool SendPushNotificationConfirmation : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.ClientRegisterPlayFabUserRequest
// Size: 0x78 (Inherited: 0x08)
struct FClientRegisterPlayFabUserRequest : FPlayFabRequestCommon {
	struct FString DisplayName; // 0x08(0x10)
	struct FString Email; // 0x18(0x10)
	struct FString EncryptedRequest; // 0x28(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x38(0x08)
	struct FString Password; // 0x40(0x10)
	struct FString PlayerSecret; // 0x50(0x10)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool RequireBothUsernameAndEmail : 1; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FString Username; // 0x68(0x10)
};

// ScriptStruct PlayFab.ClientRegisterWithWindowsHelloRequest
// Size: 0x60 (Inherited: 0x08)
struct FClientRegisterWithWindowsHelloRequest : FPlayFabRequestCommon {
	struct FString DeviceName; // 0x08(0x10)
	struct FString EncryptedRequest; // 0x18(0x10)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x28(0x08)
	struct FString PlayerSecret; // 0x30(0x10)
	struct FString PublicKey; // 0x40(0x10)
	struct FString Username; // 0x50(0x10)
};

// ScriptStruct PlayFab.ClientRemoveContactEmailRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientRemoveContactEmailRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientRemoveFriendRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	struct FString FriendPlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientRemoveGenericIDRequest
// Size: 0x10 (Inherited: 0x08)
struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* GenericId; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientRemoveSharedGroupMembersRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	struct FString PlayFabIds; // 0x08(0x10)
	struct FString SharedGroupId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientReportAdActivityRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientReportAdActivityRequest : FPlayFabRequestCommon {
	enum class EAdActivity Activity; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString PlacementId; // 0x10(0x10)
	struct FString RewardId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientDeviceInfoRequest
// Size: 0x10 (Inherited: 0x08)
struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Info; // 0x08(0x08)
};

// ScriptStruct PlayFab.ClientReportPlayerClientRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	struct FString Comment; // 0x08(0x10)
	struct FString ReporteeId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientRestoreIOSPurchasesRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString ReceiptData; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientRewardAdActivityRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientRewardAdActivityRequest : FPlayFabRequestCommon {
	struct FString PlacementId; // 0x08(0x10)
	struct FString RewardId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientSendAccountRecoveryEmailRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct FString EmailTemplateId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientSetFriendTagsRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	struct FString FriendPlayFabId; // 0x08(0x10)
	struct FString Tags; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientSetPlayerSecretRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	struct FString EncryptedRequest; // 0x08(0x10)
	struct FString PlayerSecret; // 0x18(0x10)
};

// ScriptStruct PlayFab.ClientStartGameRequest
// Size: 0x60 (Inherited: 0x08)
struct FClientStartGameRequest : FPlayFabRequestCommon {
	struct FString BuildVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString CustomCommandLineData; // 0x28(0x10)
	struct FString GameMode; // 0x38(0x10)
	enum class ERegion Region; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FString StatisticName; // 0x50(0x10)
};

// ScriptStruct PlayFab.ClientStartPurchaseRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Items; // 0x18(0x10)
	struct FString StoreId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientSubtractUserVirtualCurrencyRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString VirtualCurrency; // 0x10(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	struct FString AndroidDeviceId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkAppleRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkAppleRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkCustomIDRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	struct FString CustomId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkFacebookAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkFacebookAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	struct FString FacebookInstantGamesId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkGameCenterAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkGameCenterAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkGoogleAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkGoogleAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	struct FString DeviceID; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkKongregateAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkKongregateAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkNintendoAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkNintendoAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	struct FString NintendoSwitchDeviceId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkOpenIdConnectRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkOpenIdConnectRequest : FPlayFabRequestCommon {
	struct FString ConnectionId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkPSNAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkPSNAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkSteamAccountRequest
// Size: 0x08 (Inherited: 0x08)
struct FClientUnlinkSteamAccountRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ClientUnlinkTwitchAccountRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkTwitchAccountRequest : FPlayFabRequestCommon {
	struct FString AccessToken; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkWindowsHelloAccountRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	struct FString PublicKeyHint; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlinkXboxAccountRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	struct FString XboxToken; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUnlockContainerInstanceRequest
// Size: 0x48 (Inherited: 0x08)
struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString ContainerItemInstanceId; // 0x28(0x10)
	struct FString KeyItemInstanceId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ClientUnlockContainerItemRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString ContainerItemId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientUpdateAvatarUrlRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	struct FString ImageUrl; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUpdateCharacterDataRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* Data; // 0x18(0x08)
	struct FString KeysToRemove; // 0x20(0x10)
	enum class EUserDataPermission Permission; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct PlayFab.ClientUpdateCharacterStatisticsRequest
// Size: 0x20 (Inherited: 0x08)
struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* CharacterStatistics; // 0x18(0x08)
};

// ScriptStruct PlayFab.ClientUpdatePlayerStatisticsRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Statistics; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientUpdateSharedGroupDataRequest
// Size: 0x38 (Inherited: 0x08)
struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	enum class EUserDataPermission Permission; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString SharedGroupId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ClientUpdateUserDataRequest
// Size: 0x28 (Inherited: 0x08)
struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	enum class EUserDataPermission Permission; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameRequest
// Size: 0x18 (Inherited: 0x08)
struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	struct FString DisplayName; // 0x08(0x10)
};

// ScriptStruct PlayFab.ClientValidateAmazonReceiptRequest
// Size: 0x50 (Inherited: 0x08)
struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CurrencyCode; // 0x18(0x10)
	int32_t PurchasePrice; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString ReceiptId; // 0x30(0x10)
	struct FString UserId; // 0x40(0x10)
};

// ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseRequest
// Size: 0x50 (Inherited: 0x08)
struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CurrencyCode; // 0x18(0x10)
	int32_t PurchasePrice; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString ReceiptJson; // 0x30(0x10)
	struct FString Signature; // 0x40(0x10)
};

// ScriptStruct PlayFab.ClientValidateIOSReceiptRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CurrencyCode; // 0x18(0x10)
	int32_t PurchasePrice; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString ReceiptData; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientValidateWindowsReceiptRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CurrencyCode; // 0x18(0x10)
	int32_t PurchasePrice; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString Receipt; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientWriteClientCharacterEventRequest
// Size: 0x40 (Inherited: 0x08)
struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Body; // 0x08(0x08)
	struct FString CharacterId; // 0x10(0x10)
	struct FString EventName; // 0x20(0x10)
	struct FString Timestamp; // 0x30(0x10)
};

// ScriptStruct PlayFab.ClientWriteClientPlayerEventRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Body; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
};

// ScriptStruct PlayFab.ClientWriteTitleEventRequest
// Size: 0x30 (Inherited: 0x08)
struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Body; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
};

// ScriptStruct PlayFab.CloudScriptExecuteCloudScriptResult
// Size: 0x60 (Inherited: 0x08)
struct FCloudScriptExecuteCloudScriptResult : FPlayFabResultCommon {
	int32_t APIRequestsIssued; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* Error; // 0x10(0x08)
	int32_t ExecutionTimeSeconds; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString FunctionName; // 0x20(0x10)
	struct UPlayFabJsonObject* FunctionResult; // 0x30(0x08)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool FunctionResultTooLarge : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t HttpRequestsIssued; // 0x3c(0x04)
	struct TArray<struct UPlayFabJsonObject*> Logs; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool LogsTooLarge : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t MemoryConsumedBytes; // 0x54(0x04)
	int32_t ProcessorTimeSeconds; // 0x58(0x04)
	int32_t Revision; // 0x5c(0x04)
};

// ScriptStruct PlayFab.CloudScriptExecuteFunctionResult
// Size: 0x38 (Inherited: 0x08)
struct FCloudScriptExecuteFunctionResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Error; // 0x08(0x08)
	int32_t ExecutionTimeMilliseconds; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString FunctionName; // 0x18(0x10)
	struct UPlayFabJsonObject* FunctionResult; // 0x28(0x08)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool FunctionResultTooLarge : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct PlayFab.CloudScriptListFunctionsResult
// Size: 0x18 (Inherited: 0x08)
struct FCloudScriptListFunctionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Functions; // 0x08(0x10)
};

// ScriptStruct PlayFab.CloudScriptListHttpFunctionsResult
// Size: 0x18 (Inherited: 0x08)
struct FCloudScriptListHttpFunctionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Functions; // 0x08(0x10)
};

// ScriptStruct PlayFab.CloudScriptListQueuedFunctionsResult
// Size: 0x18 (Inherited: 0x08)
struct FCloudScriptListQueuedFunctionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Functions; // 0x08(0x10)
};

// ScriptStruct PlayFab.CloudScriptEmptyResult
// Size: 0x08 (Inherited: 0x08)
struct FCloudScriptEmptyResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.CloudScriptExecuteEntityCloudScriptRequest
// Size: 0x30 (Inherited: 0x08)
struct FCloudScriptExecuteEntityCloudScriptRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString FunctionName; // 0x10(0x10)
	struct UPlayFabJsonObject* FunctionParameter; // 0x20(0x08)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool GeneratePlayStreamEvent : 1; // 0x28(0x01)
	enum class ECloudScriptRevisionOption RevisionSelection; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	int32_t SpecificRevision; // 0x2c(0x04)
};

// ScriptStruct PlayFab.CloudScriptExecuteFunctionRequest
// Size: 0x30 (Inherited: 0x08)
struct FCloudScriptExecuteFunctionRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString FunctionName; // 0x10(0x10)
	struct UPlayFabJsonObject* FunctionParameter; // 0x20(0x08)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool GeneratePlayStreamEvent : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.CloudScriptListFunctionsRequest
// Size: 0x08 (Inherited: 0x08)
struct FCloudScriptListFunctionsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.CloudScriptPostFunctionResultForEntityTriggeredActionRequest
// Size: 0x18 (Inherited: 0x08)
struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* FunctionResult; // 0x10(0x08)
};

// ScriptStruct PlayFab.CloudScriptPostFunctionResultForFunctionExecutionRequest
// Size: 0x18 (Inherited: 0x08)
struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* FunctionResult; // 0x10(0x08)
};

// ScriptStruct PlayFab.CloudScriptPostFunctionResultForPlayerTriggeredActionRequest
// Size: 0x28 (Inherited: 0x08)
struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* FunctionResult; // 0x10(0x08)
	struct UPlayFabJsonObject* PlayerProfile; // 0x18(0x08)
	struct UPlayFabJsonObject* PlayStreamEventEnvelope; // 0x20(0x08)
};

// ScriptStruct PlayFab.CloudScriptPostFunctionResultForScheduledTaskRequest
// Size: 0x20 (Inherited: 0x08)
struct FCloudScriptPostFunctionResultForScheduledTaskRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* FunctionResult; // 0x10(0x08)
	struct UPlayFabJsonObject* ScheduledTaskId; // 0x18(0x08)
};

// ScriptStruct PlayFab.CloudScriptRegisterHttpFunctionRequest
// Size: 0x28 (Inherited: 0x08)
struct FCloudScriptRegisterHttpFunctionRequest : FPlayFabRequestCommon {
	struct FString FunctionName; // 0x08(0x10)
	struct FString FunctionUrl; // 0x18(0x10)
};

// ScriptStruct PlayFab.CloudScriptRegisterQueuedFunctionRequest
// Size: 0x38 (Inherited: 0x08)
struct FCloudScriptRegisterQueuedFunctionRequest : FPlayFabRequestCommon {
	struct FString ConnectionString; // 0x08(0x10)
	struct FString FunctionName; // 0x18(0x10)
	struct FString QueueName; // 0x28(0x10)
};

// ScriptStruct PlayFab.CloudScriptUnregisterFunctionRequest
// Size: 0x18 (Inherited: 0x08)
struct FCloudScriptUnregisterFunctionRequest : FPlayFabRequestCommon {
	struct FString FunctionName; // 0x08(0x10)
};

// ScriptStruct PlayFab.DataAbortFileUploadsResponse
// Size: 0x18 (Inherited: 0x08)
struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	int32_t ProfileVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct PlayFab.DataAbortFileUploadsRequest
// Size: 0x28 (Inherited: 0x08)
struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString FileNames; // 0x10(0x10)
	int32_t ProfileVersion; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlayFab.DataDeleteFilesResponse
// Size: 0x18 (Inherited: 0x08)
struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	int32_t ProfileVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct PlayFab.DataFinalizeFileUploadsResponse
// Size: 0x20 (Inherited: 0x08)
struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* MetaData; // 0x10(0x08)
	int32_t ProfileVersion; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.DataGetFilesResponse
// Size: 0x20 (Inherited: 0x08)
struct FDataGetFilesResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* MetaData; // 0x10(0x08)
	int32_t ProfileVersion; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.DataGetObjectsResponse
// Size: 0x20 (Inherited: 0x08)
struct FDataGetObjectsResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Objects; // 0x10(0x08)
	int32_t ProfileVersion; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.DataInitiateFileUploadsResponse
// Size: 0x28 (Inherited: 0x08)
struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	int32_t ProfileVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct UPlayFabJsonObject*> UploadDetails; // 0x18(0x10)
};

// ScriptStruct PlayFab.DataSetObjectsResponse
// Size: 0x20 (Inherited: 0x08)
struct FDataSetObjectsResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> SetResults; // 0x10(0x10)
};

// ScriptStruct PlayFab.DataDeleteFilesRequest
// Size: 0x28 (Inherited: 0x08)
struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString FileNames; // 0x10(0x10)
	int32_t ProfileVersion; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlayFab.DataFinalizeFileUploadsRequest
// Size: 0x20 (Inherited: 0x08)
struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString FileNames; // 0x10(0x10)
};

// ScriptStruct PlayFab.DataGetFilesRequest
// Size: 0x10 (Inherited: 0x08)
struct FDataGetFilesRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
};

// ScriptStruct PlayFab.DataGetObjectsRequest
// Size: 0x18 (Inherited: 0x08)
struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool EscapeObject : 1; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct PlayFab.DataInitiateFileUploadsRequest
// Size: 0x28 (Inherited: 0x08)
struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString FileNames; // 0x10(0x10)
	int32_t ProfileVersion; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlayFab.DataSetObjectsRequest
// Size: 0x28 (Inherited: 0x08)
struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	int32_t ExpectedProfileVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct UPlayFabJsonObject*> Objects; // 0x18(0x10)
};

// ScriptStruct PlayFab.EventsWriteEventsResponse
// Size: 0x18 (Inherited: 0x08)
struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	struct FString AssignedEventIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.EventsWriteEventsRequest
// Size: 0x18 (Inherited: 0x08)
struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Events; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationCreateExperimentResult
// Size: 0x18 (Inherited: 0x08)
struct FExperimentationCreateExperimentResult : FPlayFabResultCommon {
	struct FString ExperimentId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationCreateExperimentRequest
// Size: 0x70 (Inherited: 0x08)
struct FExperimentationCreateExperimentRequest : FPlayFabRequestCommon {
	struct FString Description; // 0x08(0x10)
	int32_t DURATION; // 0x18(0x04)
	enum class EExperimentType ExperimentType; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	struct FString Name; // 0x20(0x10)
	struct FString SegmentId; // 0x30(0x10)
	struct FString StartDate; // 0x40(0x10)
	struct FString TitlePlayerAccountTestIds; // 0x50(0x10)
	struct TArray<struct UPlayFabJsonObject*> Variants; // 0x60(0x10)
};

// ScriptStruct PlayFab.ExperimentationEmptyResponse
// Size: 0x08 (Inherited: 0x08)
struct FExperimentationEmptyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ExperimentationGetExperimentsResult
// Size: 0x18 (Inherited: 0x08)
struct FExperimentationGetExperimentsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Experiments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationGetLatestScorecardResult
// Size: 0x10 (Inherited: 0x08)
struct FExperimentationGetLatestScorecardResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Scorecard; // 0x08(0x08)
};

// ScriptStruct PlayFab.ExperimentationGetTreatmentAssignmentResult
// Size: 0x10 (Inherited: 0x08)
struct FExperimentationGetTreatmentAssignmentResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* TreatmentAssignment; // 0x08(0x08)
};

// ScriptStruct PlayFab.ExperimentationDeleteExperimentRequest
// Size: 0x18 (Inherited: 0x08)
struct FExperimentationDeleteExperimentRequest : FPlayFabRequestCommon {
	struct FString ExperimentId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationGetExperimentsRequest
// Size: 0x08 (Inherited: 0x08)
struct FExperimentationGetExperimentsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ExperimentationGetLatestScorecardRequest
// Size: 0x18 (Inherited: 0x08)
struct FExperimentationGetLatestScorecardRequest : FPlayFabRequestCommon {
	struct FString ExperimentId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationGetTreatmentAssignmentRequest
// Size: 0x10 (Inherited: 0x08)
struct FExperimentationGetTreatmentAssignmentRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
};

// ScriptStruct PlayFab.ExperimentationStartExperimentRequest
// Size: 0x18 (Inherited: 0x08)
struct FExperimentationStartExperimentRequest : FPlayFabRequestCommon {
	struct FString ExperimentId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationStopExperimentRequest
// Size: 0x18 (Inherited: 0x08)
struct FExperimentationStopExperimentRequest : FPlayFabRequestCommon {
	struct FString ExperimentId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ExperimentationUpdateExperimentRequest
// Size: 0x80 (Inherited: 0x08)
struct FExperimentationUpdateExperimentRequest : FPlayFabRequestCommon {
	struct FString Description; // 0x08(0x10)
	int32_t DURATION; // 0x18(0x04)
	enum class EExperimentType ExperimentType; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	struct FString ID; // 0x20(0x10)
	struct FString Name; // 0x30(0x10)
	struct FString SegmentId; // 0x40(0x10)
	struct FString StartDate; // 0x50(0x10)
	struct FString TitlePlayerAccountTestIds; // 0x60(0x10)
	struct TArray<struct UPlayFabJsonObject*> Variants; // 0x70(0x10)
};

// ScriptStruct PlayFab.GroupsEmptyResponse
// Size: 0x08 (Inherited: 0x08)
struct FGroupsEmptyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.GroupsAcceptGroupApplicationRequest
// Size: 0x18 (Inherited: 0x08)
struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
};

// ScriptStruct PlayFab.GroupsAcceptGroupInvitationRequest
// Size: 0x18 (Inherited: 0x08)
struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
};

// ScriptStruct PlayFab.GroupsAddMembersRequest
// Size: 0x30 (Inherited: 0x08)
struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x10(0x10)
	struct FString RoleId; // 0x20(0x10)
};

// ScriptStruct PlayFab.GroupsApplyToGroupResponse
// Size: 0x28 (Inherited: 0x08)
struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString Expires; // 0x10(0x10)
	struct UPlayFabJsonObject* Group; // 0x20(0x08)
};

// ScriptStruct PlayFab.GroupsApplyToGroupRequest
// Size: 0x20 (Inherited: 0x08)
struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool AutoAcceptOutstandingInvite : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UPlayFabJsonObject* Entity; // 0x10(0x08)
	struct UPlayFabJsonObject* Group; // 0x18(0x08)
};

// ScriptStruct PlayFab.GroupsBlockEntityRequest
// Size: 0x18 (Inherited: 0x08)
struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
};

// ScriptStruct PlayFab.GroupsChangeMemberRoleRequest
// Size: 0x40 (Inherited: 0x08)
struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	struct FString DestinationRoleId; // 0x08(0x10)
	struct UPlayFabJsonObject* Group; // 0x18(0x08)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x20(0x10)
	struct FString OriginRoleId; // 0x30(0x10)
};

// ScriptStruct PlayFab.GroupsCreateGroupResponse
// Size: 0x60 (Inherited: 0x08)
struct FGroupsCreateGroupResponse : FPlayFabResultCommon {
	struct FString AdminRoleId; // 0x08(0x10)
	struct FString Created; // 0x18(0x10)
	struct UPlayFabJsonObject* Group; // 0x28(0x08)
	struct FString GroupName; // 0x30(0x10)
	struct FString MemberRoleId; // 0x40(0x10)
	int32_t ProfileVersion; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct UPlayFabJsonObject* Roles; // 0x58(0x08)
};

// ScriptStruct PlayFab.GroupsCreateGroupRequest
// Size: 0x20 (Inherited: 0x08)
struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString GroupName; // 0x10(0x10)
};

// ScriptStruct PlayFab.GroupsCreateGroupRoleResponse
// Size: 0x30 (Inherited: 0x08)
struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString RoleId; // 0x10(0x10)
	struct FString RoleName; // 0x20(0x10)
};

// ScriptStruct PlayFab.GroupsCreateGroupRoleRequest
// Size: 0x30 (Inherited: 0x08)
struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
	struct FString RoleId; // 0x10(0x10)
	struct FString RoleName; // 0x20(0x10)
};

// ScriptStruct PlayFab.GroupsGetGroupResponse
// Size: 0x60 (Inherited: 0x08)
struct FGroupsGetGroupResponse : FPlayFabResultCommon {
	struct FString AdminRoleId; // 0x08(0x10)
	struct FString Created; // 0x18(0x10)
	struct UPlayFabJsonObject* Group; // 0x28(0x08)
	struct FString GroupName; // 0x30(0x10)
	struct FString MemberRoleId; // 0x40(0x10)
	int32_t ProfileVersion; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct UPlayFabJsonObject* Roles; // 0x58(0x08)
};

// ScriptStruct PlayFab.GroupsInviteToGroupResponse
// Size: 0x40 (Inherited: 0x08)
struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	struct FString Expires; // 0x08(0x10)
	struct UPlayFabJsonObject* Group; // 0x18(0x08)
	struct UPlayFabJsonObject* InvitedByEntity; // 0x20(0x08)
	struct UPlayFabJsonObject* InvitedEntity; // 0x28(0x08)
	struct FString RoleId; // 0x30(0x10)
};

// ScriptStruct PlayFab.GroupsIsMemberResponse
// Size: 0x10 (Inherited: 0x08)
struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IsMember : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct PlayFab.GroupsListGroupApplicationsResponse
// Size: 0x18 (Inherited: 0x08)
struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Applications; // 0x08(0x10)
};

// ScriptStruct PlayFab.GroupsListGroupBlocksResponse
// Size: 0x18 (Inherited: 0x08)
struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BlockedEntities; // 0x08(0x10)
};

// ScriptStruct PlayFab.GroupsListGroupInvitationsResponse
// Size: 0x18 (Inherited: 0x08)
struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Invitations; // 0x08(0x10)
};

// ScriptStruct PlayFab.GroupsListGroupMembersResponse
// Size: 0x18 (Inherited: 0x08)
struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x08(0x10)
};

// ScriptStruct PlayFab.GroupsListMembershipResponse
// Size: 0x18 (Inherited: 0x08)
struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Groups; // 0x08(0x10)
};

// ScriptStruct PlayFab.GroupsListMembershipOpportunitiesResponse
// Size: 0x28 (Inherited: 0x08)
struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Applications; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Invitations; // 0x18(0x10)
};

// ScriptStruct PlayFab.GroupsUpdateGroupResponse
// Size: 0x20 (Inherited: 0x08)
struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	struct FString OperationReason; // 0x08(0x10)
	int32_t ProfileVersion; // 0x18(0x04)
	enum class EOperationTypes SetResult; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct PlayFab.GroupsUpdateGroupRoleResponse
// Size: 0x20 (Inherited: 0x08)
struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	struct FString OperationReason; // 0x08(0x10)
	int32_t ProfileVersion; // 0x18(0x04)
	enum class EOperationTypes SetResult; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct PlayFab.GroupsDeleteGroupRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsDeleteRoleRequest
// Size: 0x20 (Inherited: 0x08)
struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
	struct FString RoleId; // 0x10(0x10)
};

// ScriptStruct PlayFab.GroupsGetGroupRequest
// Size: 0x20 (Inherited: 0x08)
struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
	struct FString GroupName; // 0x10(0x10)
};

// ScriptStruct PlayFab.GroupsInviteToGroupRequest
// Size: 0x30 (Inherited: 0x08)
struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool AutoAcceptOutstandingApplication : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UPlayFabJsonObject* Entity; // 0x10(0x08)
	struct UPlayFabJsonObject* Group; // 0x18(0x08)
	struct FString RoleId; // 0x20(0x10)
};

// ScriptStruct PlayFab.GroupsIsMemberRequest
// Size: 0x28 (Inherited: 0x08)
struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
	struct FString RoleId; // 0x18(0x10)
};

// ScriptStruct PlayFab.GroupsListGroupApplicationsRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsListGroupBlocksRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsListGroupInvitationsRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsListGroupMembersRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsListMembershipRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsListMembershipOpportunitiesRequest
// Size: 0x10 (Inherited: 0x08)
struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
};

// ScriptStruct PlayFab.GroupsRemoveGroupApplicationRequest
// Size: 0x18 (Inherited: 0x08)
struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
};

// ScriptStruct PlayFab.GroupsRemoveGroupInvitationRequest
// Size: 0x18 (Inherited: 0x08)
struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
};

// ScriptStruct PlayFab.GroupsRemoveMembersRequest
// Size: 0x30 (Inherited: 0x08)
struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Group; // 0x08(0x08)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x10(0x10)
	struct FString RoleId; // 0x20(0x10)
};

// ScriptStruct PlayFab.GroupsUnblockEntityRequest
// Size: 0x18 (Inherited: 0x08)
struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
};

// ScriptStruct PlayFab.GroupsUpdateGroupRequest
// Size: 0x48 (Inherited: 0x08)
struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	struct FString AdminRoleId; // 0x08(0x10)
	int32_t ExpectedProfileVersion; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UPlayFabJsonObject* Group; // 0x20(0x08)
	struct FString GroupName; // 0x28(0x10)
	struct FString MemberRoleId; // 0x38(0x10)
};

// ScriptStruct PlayFab.GroupsUpdateGroupRoleRequest
// Size: 0x38 (Inherited: 0x08)
struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	int32_t ExpectedProfileVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* Group; // 0x10(0x08)
	struct FString RoleId; // 0x18(0x10)
	struct FString RoleName; // 0x28(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsGetDetailsResponse
// Size: 0x40 (Inherited: 0x08)
struct FInsightsInsightsGetDetailsResponse : FPlayFabResultCommon {
	int32_t DataUsageMb; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString ErrorMessage; // 0x10(0x10)
	struct UPlayFabJsonObject* Limits; // 0x20(0x08)
	struct TArray<struct UPlayFabJsonObject*> PendingOperations; // 0x28(0x10)
	int32_t PerformanceLevel; // 0x38(0x04)
	int32_t RetentionDays; // 0x3c(0x04)
};

// ScriptStruct PlayFab.InsightsInsightsGetLimitsResponse
// Size: 0x28 (Inherited: 0x08)
struct FInsightsInsightsGetLimitsResponse : FPlayFabResultCommon {
	int32_t DefaultPerformanceLevel; // 0x08(0x04)
	int32_t DefaultStorageRetentionDays; // 0x0c(0x04)
	int32_t StorageMaxRetentionDays; // 0x10(0x04)
	int32_t StorageMinRetentionDays; // 0x14(0x04)
	struct TArray<struct UPlayFabJsonObject*> SubMeters; // 0x18(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsGetOperationStatusResponse
// Size: 0x80 (Inherited: 0x08)
struct FInsightsInsightsGetOperationStatusResponse : FPlayFabResultCommon {
	struct FString Message; // 0x08(0x10)
	struct FString OperationCompletedTime; // 0x18(0x10)
	struct FString OperationId; // 0x28(0x10)
	struct FString OperationLastUpdated; // 0x38(0x10)
	struct FString OperationStartedTime; // 0x48(0x10)
	struct FString OperationType; // 0x58(0x10)
	int32_t OperationValue; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FString Status; // 0x70(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsGetPendingOperationsResponse
// Size: 0x18 (Inherited: 0x08)
struct FInsightsInsightsGetPendingOperationsResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> PendingOperations; // 0x08(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsOperationResponse
// Size: 0x38 (Inherited: 0x08)
struct FInsightsInsightsOperationResponse : FPlayFabResultCommon {
	struct FString Message; // 0x08(0x10)
	struct FString OperationId; // 0x18(0x10)
	struct FString OperationType; // 0x28(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsEmptyRequest
// Size: 0x08 (Inherited: 0x08)
struct FInsightsInsightsEmptyRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.InsightsInsightsGetOperationStatusRequest
// Size: 0x18 (Inherited: 0x08)
struct FInsightsInsightsGetOperationStatusRequest : FPlayFabRequestCommon {
	struct FString OperationId; // 0x08(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsGetPendingOperationsRequest
// Size: 0x18 (Inherited: 0x08)
struct FInsightsInsightsGetPendingOperationsRequest : FPlayFabRequestCommon {
	struct FString OperationType; // 0x08(0x10)
};

// ScriptStruct PlayFab.InsightsInsightsSetPerformanceRequest
// Size: 0x10 (Inherited: 0x08)
struct FInsightsInsightsSetPerformanceRequest : FPlayFabRequestCommon {
	int32_t PerformanceLevel; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.InsightsInsightsSetStorageRetentionRequest
// Size: 0x10 (Inherited: 0x08)
struct FInsightsInsightsSetStorageRetentionRequest : FPlayFabRequestCommon {
	int32_t RetentionDays; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.LocalizationGetLanguageListResponse
// Size: 0x18 (Inherited: 0x08)
struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	struct FString LanguageList; // 0x08(0x10)
};

// ScriptStruct PlayFab.LocalizationGetLanguageListRequest
// Size: 0x08 (Inherited: 0x08)
struct FLocalizationGetLanguageListRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MatchmakerAuthUserResponse
// Size: 0x20 (Inherited: 0x08)
struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool Authorized : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.MatchmakerAuthUserRequest
// Size: 0x18 (Inherited: 0x08)
struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	struct FString AuthorizationTicket; // 0x08(0x10)
};

// ScriptStruct PlayFab.MatchmakerPlayerJoinedResponse
// Size: 0x08 (Inherited: 0x08)
struct FMatchmakerPlayerJoinedResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MatchmakerPlayerLeftResponse
// Size: 0x08 (Inherited: 0x08)
struct FMatchmakerPlayerLeftResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MatchmakerStartGameResponse
// Size: 0x50 (Inherited: 0x08)
struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	struct FString GameID; // 0x08(0x10)
	struct FString ServerIPV4Address; // 0x18(0x10)
	struct FString ServerIPV6Address; // 0x28(0x10)
	int32_t ServerPort; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FString ServerPublicDNSName; // 0x40(0x10)
};

// ScriptStruct PlayFab.MatchmakerUserInfoResponse
// Size: 0x70 (Inherited: 0x08)
struct FMatchmakerUserInfoResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Inventory; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool IsDeveloper : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString PlayFabId; // 0x20(0x10)
	struct FString SteamId; // 0x30(0x10)
	struct FString TitleDisplayName; // 0x40(0x10)
	struct FString Username; // 0x50(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x60(0x08)
	struct UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x68(0x08)
};

// ScriptStruct PlayFab.MatchmakerPlayerJoinedRequest
// Size: 0x28 (Inherited: 0x08)
struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.MatchmakerPlayerLeftRequest
// Size: 0x28 (Inherited: 0x08)
struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.MatchmakerStartGameRequest
// Size: 0x50 (Inherited: 0x08)
struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	struct FString Build; // 0x08(0x10)
	struct FString CustomCommandLineData; // 0x18(0x10)
	struct FString ExternalMatchmakerEventEndpoint; // 0x28(0x10)
	struct FString GameMode; // 0x38(0x10)
	enum class ERegion Region; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct PlayFab.MatchmakerUserInfoRequest
// Size: 0x20 (Inherited: 0x08)
struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	int32_t MinCatalogVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerResult
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString QueueName; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerResult
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString QueueName; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketResult
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerCancelMatchmakingTicketResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketRequest
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	struct FString QueueName; // 0x08(0x10)
	struct FString TicketId; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketResult
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerCancelServerBackfillTicketResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketRequest
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	struct FString QueueName; // 0x08(0x10)
	struct FString TicketId; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerBuildAliasDetailsResponse
// Size: 0x50 (Inherited: 0x08)
struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	struct FString AliasId; // 0x08(0x10)
	struct FString AliasName; // 0x18(0x10)
	struct TArray<struct UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28(0x10)
	int32_t PageSize; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FString SkipToken; // 0x40(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateBuildAliasRequest
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	struct FString AliasName; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerResponse
// Size: 0xd0 (Inherited: 0x08)
struct FMultiplayerCreateBuildWithCustomContainerResponse : FPlayFabResultCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString BuildName; // 0x18(0x10)
	enum class EContainerFlavor ContainerFlavor; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString ContainerRunCommand; // 0x30(0x10)
	struct FString CreationTime; // 0x40(0x10)
	struct UPlayFabJsonObject* CustomGameContainerImage; // 0x50(0x08)
	struct TArray<struct UPlayFabJsonObject*> GameAssetReferences; // 0x58(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameCertificateReferences; // 0x68(0x10)
	struct UPlayFabJsonObject* MetaData; // 0x78(0x08)
	int32_t MultiplayerServerCountPerVm; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FString OsPlatform; // 0x88(0x10)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0x98(0x10)
	struct TArray<struct UPlayFabJsonObject*> RegionConfigurations; // 0xa8(0x10)
	struct FString ServerType; // 0xb8(0x10)
	enum class EAzureVmSize VmSize; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerRequest
// Size: 0x90 (Inherited: 0x08)
struct FMultiplayerCreateBuildWithCustomContainerRequest : FPlayFabRequestCommon {
	struct FString BuildName; // 0x08(0x10)
	enum class EContainerFlavor ContainerFlavor; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct UPlayFabJsonObject* ContainerImageReference; // 0x20(0x08)
	struct FString ContainerRunCommand; // 0x28(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameAssetReferences; // 0x38(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameCertificateReferences; // 0x48(0x10)
	struct UPlayFabJsonObject* MetaData; // 0x58(0x08)
	int32_t MultiplayerServerCountPerVm; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0x68(0x10)
	struct TArray<struct UPlayFabJsonObject*> RegionConfigurations; // 0x78(0x10)
	enum class EAzureVmSize VmSize; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerResponse
// Size: 0xe0 (Inherited: 0x08)
struct FMultiplayerCreateBuildWithManagedContainerResponse : FPlayFabResultCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString BuildName; // 0x18(0x10)
	enum class EContainerFlavor ContainerFlavor; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString CreationTime; // 0x30(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameAssetReferences; // 0x40(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameCertificateReferences; // 0x50(0x10)
	struct FString GameWorkingDirectory; // 0x60(0x10)
	struct UPlayFabJsonObject* InstrumentationConfiguration; // 0x70(0x08)
	struct UPlayFabJsonObject* MetaData; // 0x78(0x08)
	int32_t MultiplayerServerCountPerVm; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FString OsPlatform; // 0x88(0x10)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0x98(0x10)
	struct TArray<struct UPlayFabJsonObject*> RegionConfigurations; // 0xa8(0x10)
	struct FString ServerType; // 0xb8(0x10)
	struct FString StartMultiplayerServerCommand; // 0xc8(0x10)
	enum class EAzureVmSize VmSize; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerRequest
// Size: 0xa0 (Inherited: 0x08)
struct FMultiplayerCreateBuildWithManagedContainerRequest : FPlayFabRequestCommon {
	struct FString BuildName; // 0x08(0x10)
	enum class EContainerFlavor ContainerFlavor; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct TArray<struct UPlayFabJsonObject*> GameAssetReferences; // 0x20(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameCertificateReferences; // 0x30(0x10)
	struct FString GameWorkingDirectory; // 0x40(0x10)
	struct UPlayFabJsonObject* InstrumentationConfiguration; // 0x50(0x08)
	struct UPlayFabJsonObject* MetaData; // 0x58(0x08)
	int32_t MultiplayerServerCountPerVm; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0x68(0x10)
	struct TArray<struct UPlayFabJsonObject*> RegionConfigurations; // 0x78(0x10)
	struct FString StartMultiplayerServerCommand; // 0x88(0x10)
	enum class EAzureVmSize VmSize; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketResult
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	struct FString TicketId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Creator; // 0x08(0x08)
	int32_t GiveUpAfterSeconds; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct UPlayFabJsonObject*> MembersToMatchWith; // 0x18(0x10)
	struct FString QueueName; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateRemoteUserResponse
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	struct FString ExpirationTime; // 0x08(0x10)
	struct FString Password; // 0x18(0x10)
	struct FString Username; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateRemoteUserRequest
// Size: 0x58 (Inherited: 0x08)
struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString ExpirationTime; // 0x18(0x10)
	struct FString Region; // 0x28(0x10)
	struct FString Username; // 0x38(0x10)
	struct FString VmId; // 0x48(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketResult
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	struct FString TicketId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	int32_t GiveUpAfterSeconds; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x10(0x10)
	struct FString QueueName; // 0x20(0x10)
	struct UPlayFabJsonObject* ServerDetails; // 0x30(0x08)
};

// ScriptStruct PlayFab.MultiplayerCreateServerMatchmakingTicketRequest
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	int32_t GiveUpAfterSeconds; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x10(0x10)
	struct FString QueueName; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerEmptyResponse
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerEmptyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleResponse
// Size: 0x10 (Inherited: 0x08)
struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	enum class ETitleMultiplayerServerEnabledStatus Status; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlResponse
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	struct FString AssetUploadUrl; // 0x08(0x10)
	struct FString Filename; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetBuildResponse
// Size: 0xf8 (Inherited: 0x08)
struct FMultiplayerGetBuildResponse : FPlayFabResultCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString BuildName; // 0x18(0x10)
	struct FString BuildStatus; // 0x28(0x10)
	enum class EContainerFlavor ContainerFlavor; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FString ContainerRunCommand; // 0x40(0x10)
	struct FString CreationTime; // 0x50(0x10)
	struct UPlayFabJsonObject* CustomGameContainerImage; // 0x60(0x08)
	struct TArray<struct UPlayFabJsonObject*> GameAssetReferences; // 0x68(0x10)
	struct TArray<struct UPlayFabJsonObject*> GameCertificateReferences; // 0x78(0x10)
	struct UPlayFabJsonObject* InstrumentationConfiguration; // 0x88(0x08)
	struct UPlayFabJsonObject* MetaData; // 0x90(0x08)
	int32_t MultiplayerServerCountPerVm; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FString OsPlatform; // 0xa0(0x10)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0xb0(0x10)
	struct TArray<struct UPlayFabJsonObject*> RegionConfigurations; // 0xc0(0x10)
	struct FString ServerType; // 0xd0(0x10)
	struct FString StartMultiplayerServerCommand; // 0xe0(0x10)
	enum class EAzureVmSize VmSize; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsResponse
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	struct FString DnsName; // 0x08(0x10)
	struct FString Password; // 0x18(0x10)
	struct FString Username; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetMatchResult
// Size: 0x40 (Inherited: 0x08)
struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	struct FString MatchId; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x18(0x10)
	struct FString RegionPreferences; // 0x28(0x10)
	struct UPlayFabJsonObject* ServerDetails; // 0x38(0x08)
};

// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketResult
// Size: 0x98 (Inherited: 0x08)
struct FMultiplayerGetMatchmakingTicketResult : FPlayFabResultCommon {
	struct FString CancellationReasonString; // 0x08(0x10)
	struct FString Created; // 0x18(0x10)
	struct UPlayFabJsonObject* Creator; // 0x28(0x08)
	int32_t GiveUpAfterSeconds; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FString MatchId; // 0x38(0x10)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x48(0x10)
	struct TArray<struct UPlayFabJsonObject*> MembersToMatchWith; // 0x58(0x10)
	struct FString QueueName; // 0x68(0x10)
	struct FString Status; // 0x78(0x10)
	struct FString TicketId; // 0x88(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsResponse
// Size: 0xa8 (Inherited: 0x08)
struct FMultiplayerGetMultiplayerServerDetailsResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ConnectedPlayers; // 0x08(0x10)
	struct FString FQDN; // 0x18(0x10)
	struct FString IPV4Address; // 0x28(0x10)
	struct FString LastStateTransitionTime; // 0x38(0x10)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0x48(0x10)
	struct FString Region; // 0x58(0x10)
	struct FString ServerId; // 0x68(0x10)
	struct FString SessionId; // 0x78(0x10)
	struct FString State; // 0x88(0x10)
	struct FString VmId; // 0x98(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsResponse
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	struct FString LogDownloadUrl; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetQueueStatisticsResult
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	int32_t NumberOfPlayersMatching; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10(0x08)
};

// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointResponse
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	struct FString IPV4Address; // 0x08(0x10)
	int32_t Port; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketResult
// Size: 0x88 (Inherited: 0x08)
struct FMultiplayerGetServerBackfillTicketResult : FPlayFabResultCommon {
	struct FString CancellationReasonString; // 0x08(0x10)
	struct FString Created; // 0x18(0x10)
	int32_t GiveUpAfterSeconds; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString MatchId; // 0x30(0x10)
	struct TArray<struct UPlayFabJsonObject*> Members; // 0x40(0x10)
	struct FString QueueName; // 0x50(0x10)
	struct UPlayFabJsonObject* ServerDetails; // 0x60(0x08)
	struct FString Status; // 0x68(0x10)
	struct FString TicketId; // 0x78(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
// Size: 0x10 (Inherited: 0x08)
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	enum class ETitleMultiplayerServerEnabledStatus Status; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasResponse
// Size: 0x10 (Inherited: 0x08)
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Quotas; // 0x08(0x08)
};

// ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketResult
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerJoinMatchmakingTicketResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.MultiplayerListMultiplayerServersResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListAssetSummariesResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> AssetSummaries; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListBuildAliasesForTitleResponse
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerListBuildAliasesForTitleResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BuildAliases; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerListBuildSummariesResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BuildSummaries; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListCertificateSummariesResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> CertificateSummaries; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListContainerImagesResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	struct FString Images; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListContainerImageTagsResponse
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	struct FString Tags; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerResult
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	struct FString TicketIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerListPartyQosServersResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> QosServers; // 0x10(0x10)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListQosServersResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> QosServers; // 0x10(0x10)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListQosServersForTitleResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPlayFabJsonObject*> QosServers; // 0x10(0x10)
	struct FString SkipToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerResult
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	struct FString TicketIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesResponse
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString SkipToken; // 0x10(0x10)
	struct TArray<struct UPlayFabJsonObject*> VirtualMachines; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerResponse
// Size: 0xa8 (Inherited: 0x08)
struct FMultiplayerRequestMultiplayerServerResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ConnectedPlayers; // 0x08(0x10)
	struct FString FQDN; // 0x18(0x10)
	struct FString IPV4Address; // 0x28(0x10)
	struct FString LastStateTransitionTime; // 0x38(0x10)
	struct TArray<struct UPlayFabJsonObject*> Ports; // 0x48(0x10)
	struct FString Region; // 0x58(0x10)
	struct FString ServerId; // 0x68(0x10)
	struct FString SessionId; // 0x78(0x10)
	struct FString State; // 0x88(0x10)
	struct FString VmId; // 0x98(0x10)
};

// ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsResponse
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	struct FString DnsName; // 0x08(0x10)
	struct FString Password; // 0x18(0x10)
	struct FString Username; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteAssetRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	struct FString Filename; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteBuildRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteBuildAliasRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	struct FString AliasId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteBuildRegionRequest
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerDeleteBuildRegionRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString Region; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteCertificateRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteContainerImageRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerDeleteContainerImageRequest : FPlayFabRequestCommon {
	struct FString ImageName; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerDeleteRemoteUserRequest
// Size: 0x48 (Inherited: 0x08)
struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString Region; // 0x18(0x10)
	struct FString Username; // 0x28(0x10)
	struct FString VmId; // 0x38(0x10)
};

// ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerEnableMultiplayerServersForTitleRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	struct FString Filename; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetBuildRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetBuildAliasRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	struct FString AliasId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerGetContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerGetMatchRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool EscapeObject : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString MatchId; // 0x10(0x10)
	struct FString QueueName; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool ReturnMemberAttributes : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketRequest
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool EscapeObject : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString QueueName; // 0x10(0x10)
	struct FString TicketId; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString Region; // 0x18(0x10)
	struct FString SessionId; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	struct FString ServerId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetMultiplayerSessionLogsBySessionIdRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : FPlayFabRequestCommon {
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetQueueStatisticsRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	struct FString QueueName; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString Region; // 0x18(0x10)
	struct FString VmId; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketRequest
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool EscapeObject : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString QueueName; // 0x10(0x10)
	struct FString TicketId; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketRequest
// Size: 0x30 (Inherited: 0x08)
struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Member; // 0x08(0x08)
	struct FString QueueName; // 0x10(0x10)
	struct FString TicketId; // 0x20(0x10)
};

// ScriptStruct PlayFab.MultiplayerListMultiplayerServersRequest
// Size: 0x40 (Inherited: 0x08)
struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString Region; // 0x20(0x10)
	struct FString SkipToken; // 0x30(0x10)
};

// ScriptStruct PlayFab.MultiplayerListAssetSummariesRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString SkipToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerMultiplayerEmptyRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerMultiplayerEmptyRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerListBuildSummariesRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString SkipToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerListCertificateSummariesRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString SkipToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerListContainerImagesRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString SkipToken; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerListContainerImageTagsRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	struct FString ImageName; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString QueueName; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerListPartyQosServersRequest
// Size: 0x18 (Inherited: 0x08)
struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	struct FString Version; // 0x08(0x10)
};

// ScriptStruct PlayFab.MultiplayerListQosServersRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerListQosServersRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerListQosServersForTitleRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerListQosServersForTitleRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct FString QueueName; // 0x10(0x10)
};

// ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesRequest
// Size: 0x40 (Inherited: 0x08)
struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	int32_t PageSize; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString Region; // 0x20(0x10)
	struct FString SkipToken; // 0x30(0x10)
};

// ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerRequest
// Size: 0x60 (Inherited: 0x08)
struct FMultiplayerRequestMultiplayerServerRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* BuildAliasParams; // 0x08(0x08)
	struct FString BuildId; // 0x10(0x10)
	struct FString InitialPlayers; // 0x20(0x10)
	struct FString PreferredRegions; // 0x30(0x10)
	struct FString SessionCookie; // 0x40(0x10)
	struct FString SessionId; // 0x50(0x10)
};

// ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsRequest
// Size: 0x08 (Inherited: 0x08)
struct FMultiplayerRolloverContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.MultiplayerShutdownMultiplayerServerRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct FString Region; // 0x18(0x10)
	struct FString SessionId; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerUntagContainerImageRequest
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	struct FString ImageName; // 0x08(0x10)
	struct FString Tag; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerUpdateBuildAliasRequest
// Size: 0x38 (Inherited: 0x08)
struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	struct FString AliasId; // 0x08(0x10)
	struct FString AliasName; // 0x18(0x10)
	struct TArray<struct UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28(0x10)
};

// ScriptStruct PlayFab.MultiplayerUpdateBuildRegionRequest
// Size: 0x20 (Inherited: 0x08)
struct FMultiplayerUpdateBuildRegionRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct UPlayFabJsonObject* BuildRegion; // 0x18(0x08)
};

// ScriptStruct PlayFab.MultiplayerUpdateBuildRegionsRequest
// Size: 0x28 (Inherited: 0x08)
struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	struct FString BuildId; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> BuildRegions; // 0x18(0x10)
};

// ScriptStruct PlayFab.MultiplayerUploadCertificateRequest
// Size: 0x10 (Inherited: 0x08)
struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* GameCertificate; // 0x08(0x08)
};

// ScriptStruct PlayFab.ProfilesGetGlobalPolicyResponse
// Size: 0x18 (Inherited: 0x08)
struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Permissions; // 0x08(0x10)
};

// ScriptStruct PlayFab.ProfilesGetEntityProfileResponse
// Size: 0x10 (Inherited: 0x08)
struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Profile; // 0x08(0x08)
};

// ScriptStruct PlayFab.ProfilesGetEntityProfilesResponse
// Size: 0x18 (Inherited: 0x08)
struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Profiles; // 0x08(0x10)
};

// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
// Size: 0x20 (Inherited: 0x08)
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	struct FString TitleId; // 0x08(0x10)
	struct UPlayFabJsonObject* TitlePlayerAccounts; // 0x18(0x08)
};

// ScriptStruct PlayFab.ProfilesSetGlobalPolicyResponse
// Size: 0x08 (Inherited: 0x08)
struct FProfilesSetGlobalPolicyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ProfilesSetProfileLanguageResponse
// Size: 0x10 (Inherited: 0x08)
struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	enum class EOperationTypes OperationResult; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t VersionNumber; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyResponse
// Size: 0x18 (Inherited: 0x08)
struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Permissions; // 0x08(0x10)
};

// ScriptStruct PlayFab.ProfilesGetGlobalPolicyRequest
// Size: 0x08 (Inherited: 0x08)
struct FProfilesGetGlobalPolicyRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ProfilesGetEntityProfileRequest
// Size: 0x18 (Inherited: 0x08)
struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool DataAsObject : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UPlayFabJsonObject* Entity; // 0x10(0x08)
};

// ScriptStruct PlayFab.ProfilesGetEntityProfilesRequest
// Size: 0x20 (Inherited: 0x08)
struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool DataAsObject : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<struct UPlayFabJsonObject*> Entities; // 0x10(0x10)
};

// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
// Size: 0x18 (Inherited: 0x08)
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	struct FString MasterPlayerAccountIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ProfilesSetGlobalPolicyRequest
// Size: 0x18 (Inherited: 0x08)
struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Permissions; // 0x08(0x10)
};

// ScriptStruct PlayFab.ProfilesSetProfileLanguageRequest
// Size: 0x28 (Inherited: 0x08)
struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	int32_t ExpectedVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString Language; // 0x18(0x10)
};

// ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyRequest
// Size: 0x20 (Inherited: 0x08)
struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Entity; // 0x08(0x08)
	struct TArray<struct UPlayFabJsonObject*> Statements; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerModifyCharacterVirtualCurrencyResult
// Size: 0x20 (Inherited: 0x08)
struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString VirtualCurrency; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerAddCharacterVirtualCurrencyRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString CharacterId; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
	struct FString VirtualCurrency; // 0x30(0x10)
};

// ScriptStruct PlayFab.ServerEmptyResponse
// Size: 0x08 (Inherited: 0x08)
struct FServerEmptyResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerAddFriendRequest
// Size: 0x58 (Inherited: 0x08)
struct FServerAddFriendRequest : FPlayFabRequestCommon {
	struct FString FriendEmail; // 0x08(0x10)
	struct FString FriendPlayFabId; // 0x18(0x10)
	struct FString FriendTitleDisplayName; // 0x28(0x10)
	struct FString FriendUsername; // 0x38(0x10)
	struct FString PlayFabId; // 0x48(0x10)
};

// ScriptStruct PlayFab.ServerEmptyResult
// Size: 0x08 (Inherited: 0x08)
struct FServerEmptyResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerAddGenericIDRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* GenericId; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerAddPlayerTagResult
// Size: 0x08 (Inherited: 0x08)
struct FServerAddPlayerTagResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerAddPlayerTagRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString TagName; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerAddSharedGroupMembersResult
// Size: 0x08 (Inherited: 0x08)
struct FServerAddSharedGroupMembersResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerAddSharedGroupMembersRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	struct FString PlayFabIds; // 0x08(0x10)
	struct FString SharedGroupId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerModifyUserVirtualCurrencyResult
// Size: 0x30 (Inherited: 0x08)
struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x08(0x04)
	int32_t BalanceChange; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerAddUserVirtualCurrencyRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerAuthenticateSessionTicketResult
// Size: 0x10 (Inherited: 0x08)
struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* UserInfo; // 0x08(0x08)
};

// ScriptStruct PlayFab.ServerAuthenticateSessionTicketRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	struct FString SessionTicket; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerAwardSteamAchievementResult
// Size: 0x18 (Inherited: 0x08)
struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> AchievementResults; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerAwardSteamAchievementRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Achievements; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerBanUsersResult
// Size: 0x18 (Inherited: 0x08)
struct FServerBanUsersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerBanUsersRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerBanUsersRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Bans; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerConsumeItemResult
// Size: 0x20 (Inherited: 0x08)
struct FServerConsumeItemResult : FPlayFabResultCommon {
	struct FString ItemInstanceId; // 0x08(0x10)
	int32_t RemainingUses; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.ServerConsumeItemRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	int32_t ConsumeCount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString ItemInstanceId; // 0x20(0x10)
	struct FString PlayFabId; // 0x30(0x10)
};

// ScriptStruct PlayFab.ServerCreateSharedGroupResult
// Size: 0x18 (Inherited: 0x08)
struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	struct FString SharedGroupId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerCreateSharedGroupRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	struct FString SharedGroupId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerDeleteCharacterFromUserResult
// Size: 0x08 (Inherited: 0x08)
struct FServerDeleteCharacterFromUserResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerDeletePlayerResult
// Size: 0x08 (Inherited: 0x08)
struct FServerDeletePlayerResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerDeletePushNotificationTemplateResult
// Size: 0x08 (Inherited: 0x08)
struct FServerDeletePushNotificationTemplateResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerDeregisterGameResponse
// Size: 0x08 (Inherited: 0x08)
struct FServerDeregisterGameResponse : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerEvaluateRandomResultTableResult
// Size: 0x18 (Inherited: 0x08)
struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	struct FString ResultItemId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerExecuteCloudScriptResult
// Size: 0x60 (Inherited: 0x08)
struct FServerExecuteCloudScriptResult : FPlayFabResultCommon {
	int32_t APIRequestsIssued; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* Error; // 0x10(0x08)
	int32_t ExecutionTimeSeconds; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString FunctionName; // 0x20(0x10)
	struct UPlayFabJsonObject* FunctionResult; // 0x30(0x08)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool FunctionResultTooLarge : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t HttpRequestsIssued; // 0x3c(0x04)
	struct TArray<struct UPlayFabJsonObject*> Logs; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool LogsTooLarge : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t MemoryConsumedBytes; // 0x54(0x04)
	int32_t ProcessorTimeSeconds; // 0x58(0x04)
	int32_t Revision; // 0x5c(0x04)
};

// ScriptStruct PlayFab.ServerGetAllSegmentsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Segments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerListUsersCharactersResult
// Size: 0x18 (Inherited: 0x08)
struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Characters; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetCatalogItemsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Catalog; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterDataResult
// Size: 0x38 (Inherited: 0x08)
struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* Data; // 0x18(0x08)
	int32_t DataVersion; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterInventoryResult
// Size: 0x48 (Inherited: 0x08)
struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Inventory; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x38(0x08)
	struct UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40(0x08)
};

// ScriptStruct PlayFab.ServerGetCharacterLeaderboardResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterStatisticsResult
// Size: 0x30 (Inherited: 0x08)
struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* CharacterStatistics; // 0x18(0x08)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerGetContentDownloadUrlResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetLeaderboardResult
// Size: 0x30 (Inherited: 0x08)
struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
	struct FString NextReset; // 0x18(0x10)
	int32_t Version; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ServerGetFriendsListResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetFriendsListResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Friends; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetLeaderboardAroundUserResult
// Size: 0x30 (Inherited: 0x08)
struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
	struct FString NextReset; // 0x18(0x10)
	int32_t Version; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Leaderboard; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerCombinedInfoResult
// Size: 0x20 (Inherited: 0x08)
struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* InfoResultPayload; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerProfileResult
// Size: 0x10 (Inherited: 0x08)
struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* PlayerProfile; // 0x08(0x08)
};

// ScriptStruct PlayFab.ServerGetPlayerSegmentsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Segments; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayersInSegmentResult
// Size: 0x30 (Inherited: 0x08)
struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	struct FString ContinuationToken; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> PlayerProfiles; // 0x18(0x10)
	int32_t ProfilesInSegment; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ServerGetPlayerStatisticsResult
// Size: 0x28 (Inherited: 0x08)
struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> Statistics; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> StatisticVersions; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerTagsResult
// Size: 0x28 (Inherited: 0x08)
struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString Tags; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPublisherDataResult
// Size: 0x10 (Inherited: 0x08)
struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
};

// ScriptStruct PlayFab.ServerGetRandomResultTablesResult
// Size: 0x10 (Inherited: 0x08)
struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Tables; // 0x08(0x08)
};

// ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Data; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetSharedGroupDataResult
// Size: 0x20 (Inherited: 0x08)
struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString Members; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerGetStoreItemsResult
// Size: 0x48 (Inherited: 0x08)
struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct UPlayFabJsonObject* MarketingData; // 0x18(0x08)
	enum class EPfSourceType Source; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct UPlayFabJsonObject*> Store; // 0x28(0x10)
	struct FString StoreId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ServerGetTimeResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetTimeResult : FPlayFabResultCommon {
	struct FString Time; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetTitleDataResult
// Size: 0x10 (Inherited: 0x08)
struct FServerGetTitleDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
};

// ScriptStruct PlayFab.ServerGetTitleNewsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> News; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetUserAccountInfoResult
// Size: 0x10 (Inherited: 0x08)
struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* UserInfo; // 0x08(0x08)
};

// ScriptStruct PlayFab.ServerGetUserBansResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGetUserBansResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetUserDataResult
// Size: 0x28 (Inherited: 0x08)
struct FServerGetUserDataResult : FPlayFabResultCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	int32_t DataVersion; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetUserInventoryResult
// Size: 0x38 (Inherited: 0x08)
struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Inventory; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x28(0x08)
	struct UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30(0x08)
};

// ScriptStruct PlayFab.ServerGrantCharacterToUserResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	struct FString CharacterId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGrantItemsToCharacterResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ItemGrantResults; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGrantItemsToUserResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ItemGrantResults; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGrantItemsToUsersResult
// Size: 0x18 (Inherited: 0x08)
struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> ItemGrantResults; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerLinkPSNAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FServerLinkPSNAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerLinkServerCustomIdResult
// Size: 0x08 (Inherited: 0x08)
struct FServerLinkServerCustomIdResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerLinkXboxAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FServerLinkXboxAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerServerLoginResult
// Size: 0x68 (Inherited: 0x10)
struct FServerServerLoginResult : FPlayFabLoginResultCommon {
	struct UPlayFabJsonObject* EntityToken; // 0x10(0x08)
	struct UPlayFabJsonObject* InfoResultPayload; // 0x18(0x08)
	struct FString LastLoginTime; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool NewlyCreated : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FString PlayFabId; // 0x38(0x10)
	struct FString SessionTicket; // 0x48(0x10)
	struct UPlayFabJsonObject* SettingsForUser; // 0x58(0x08)
	struct UPlayFabJsonObject* TreatmentAssignment; // 0x60(0x08)
};

// ScriptStruct PlayFab.ServerModifyItemUsesResult
// Size: 0x20 (Inherited: 0x08)
struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	struct FString ItemInstanceId; // 0x08(0x10)
	int32_t RemainingUses; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterResult
// Size: 0x08 (Inherited: 0x08)
struct FServerMoveItemToCharacterFromCharacterResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserResult
// Size: 0x08 (Inherited: 0x08)
struct FServerMoveItemToCharacterFromUserResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterResult
// Size: 0x08 (Inherited: 0x08)
struct FServerMoveItemToUserFromCharacterResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftResult
// Size: 0x10 (Inherited: 0x08)
struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	enum class EPlayerConnectionState PlayerState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct PlayFab.ServerRedeemCouponResult
// Size: 0x18 (Inherited: 0x08)
struct FServerRedeemCouponResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> GrantedItems; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRedeemMatchmakerTicketResult
// Size: 0x28 (Inherited: 0x08)
struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	struct FString Error; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool TicketIsValid : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct UPlayFabJsonObject* UserInfo; // 0x20(0x08)
};

// ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatResult
// Size: 0x08 (Inherited: 0x08)
struct FServerRefreshGameServerInstanceHeartbeatResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerRegisterGameResponse
// Size: 0x18 (Inherited: 0x08)
struct FServerRegisterGameResponse : FPlayFabResultCommon {
	struct FString LobbyId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRemovePlayerTagResult
// Size: 0x08 (Inherited: 0x08)
struct FServerRemovePlayerTagResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerRemoveSharedGroupMembersResult
// Size: 0x08 (Inherited: 0x08)
struct FServerRemoveSharedGroupMembersResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerReportPlayerServerResult
// Size: 0x10 (Inherited: 0x08)
struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ServerRevokeAllBansForUserResult
// Size: 0x18 (Inherited: 0x08)
struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRevokeBansResult
// Size: 0x18 (Inherited: 0x08)
struct FServerRevokeBansResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRevokeInventoryResult
// Size: 0x08 (Inherited: 0x08)
struct FServerRevokeInventoryResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerRevokeInventoryItemsResult
// Size: 0x18 (Inherited: 0x08)
struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> Errors; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerSavePushNotificationTemplateResult
// Size: 0x18 (Inherited: 0x08)
struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	struct FString PushNotificationTemplateId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSendCustomAccountRecoveryEmailResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSendEmailFromTemplateResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSendEmailFromTemplateResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSendPushNotificationResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSendPushNotificationResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSetGameServerInstanceDataResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSetGameServerInstanceDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSetGameServerInstanceStateResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSetGameServerInstanceStateResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSetGameServerInstanceTagsResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSetGameServerInstanceTagsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSetPlayerSecretResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSetPlayerSecretResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSetPublisherDataResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSetPublisherDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerSetTitleDataResult
// Size: 0x08 (Inherited: 0x08)
struct FServerSetTitleDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUnlinkPSNAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FServerUnlinkPSNAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUnlinkServerCustomIdResult
// Size: 0x08 (Inherited: 0x08)
struct FServerUnlinkServerCustomIdResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUnlinkXboxAccountResult
// Size: 0x08 (Inherited: 0x08)
struct FServerUnlinkXboxAccountResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUnlockContainerItemResult
// Size: 0x40 (Inherited: 0x08)
struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> GrantedItems; // 0x08(0x10)
	struct FString UnlockedItemInstanceId; // 0x18(0x10)
	struct FString UnlockedWithItemInstanceId; // 0x28(0x10)
	struct UPlayFabJsonObject* VirtualCurrency; // 0x38(0x08)
};

// ScriptStruct PlayFab.ServerUpdateBansResult
// Size: 0x18 (Inherited: 0x08)
struct FServerUpdateBansResult : FPlayFabResultCommon {
	struct TArray<struct UPlayFabJsonObject*> BanData; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerUpdateCharacterDataResult
// Size: 0x10 (Inherited: 0x08)
struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ServerUpdateCharacterStatisticsResult
// Size: 0x08 (Inherited: 0x08)
struct FServerUpdateCharacterStatisticsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUpdatePlayerStatisticsResult
// Size: 0x08 (Inherited: 0x08)
struct FServerUpdatePlayerStatisticsResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUpdateSharedGroupDataResult
// Size: 0x08 (Inherited: 0x08)
struct FServerUpdateSharedGroupDataResult : FPlayFabResultCommon {
};

// ScriptStruct PlayFab.ServerUpdateUserDataResult
// Size: 0x10 (Inherited: 0x08)
struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ServerWriteEventResponse
// Size: 0x18 (Inherited: 0x08)
struct FServerWriteEventResponse : FPlayFabResultCommon {
	struct FString EventId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerDeleteCharacterFromUserRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool SaveCharacterInventory : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.ServerDeletePlayerRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerDeletePushNotificationTemplateRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	struct FString PushNotificationTemplateId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerDeleteSharedGroupRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	struct FString SharedGroupId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerDeregisterGameRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerEvaluateRandomResultTableRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString TableId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerExecuteCloudScriptServerRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerExecuteCloudScriptServerRequest : FPlayFabRequestCommon {
	struct FString FunctionName; // 0x08(0x10)
	struct UPlayFabJsonObject* FunctionParameter; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool GeneratePlayStreamEvent : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString PlayFabId; // 0x28(0x10)
	enum class ECloudScriptRevisionOption RevisionSelection; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t SpecificRevision; // 0x3c(0x04)
};

// ScriptStruct PlayFab.ServerGetAllSegmentsRequest
// Size: 0x08 (Inherited: 0x08)
struct FServerGetAllSegmentsRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ServerListUsersCharactersRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetCatalogItemsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterDataRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	int32_t IfChangedFromDataVersion; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString Keys; // 0x20(0x10)
	struct FString PlayFabId; // 0x30(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterInventoryRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterLeaderboardRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	struct FString CharacterType; // 0x08(0x10)
	int32_t MaxResultsCount; // 0x18(0x04)
	int32_t StartPosition; // 0x1c(0x04)
	struct FString StatisticName; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerGetCharacterStatisticsRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetContentDownloadUrlRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	struct FString HttpMethod; // 0x08(0x10)
	struct FString Key; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool ThruCDN : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayFab.ServerGetFriendLeaderboardRequest
// Size: 0x58 (Inherited: 0x08)
struct FServerGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IncludeFacebookFriends : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool IncludeSteamFriends : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t MaxResultsCount; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x20(0x08)
	int32_t StartPosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString StatisticName; // 0x30(0x10)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool UseSpecificVersion : 1; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	int32_t Version; // 0x44(0x04)
	struct FString XboxToken; // 0x48(0x10)
};

// ScriptStruct PlayFab.ServerGetFriendsListRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IncludeFacebookFriends : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool IncludeSteamFriends : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct FString PlayFabId; // 0x10(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x20(0x08)
	struct FString XboxToken; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerGetLeaderboardRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerGetLeaderboardRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x10(0x08)
	int32_t StartPosition; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString StatisticName; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool UseSpecificVersion : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t Version; // 0x34(0x04)
};

// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterRequest
// Size: 0x50 (Inherited: 0x08)
struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString CharacterType; // 0x18(0x10)
	int32_t MaxResultsCount; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString PlayFabId; // 0x30(0x10)
	struct FString StatisticName; // 0x40(0x10)
};

// ScriptStruct PlayFab.ServerGetLeaderboardAroundUserRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerGetLeaderboardAroundUserRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x20(0x08)
	struct FString StatisticName; // 0x28(0x10)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool UseSpecificVersion : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t Version; // 0x3c(0x04)
};

// ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString StatisticName; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerCombinedInfoRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerProfileRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct UPlayFabJsonObject* ProfileConstraints; // 0x18(0x08)
};

// ScriptStruct PlayFab.ServerGetPlayersSegmentsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayersInSegmentRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	struct FString ContinuationToken; // 0x08(0x10)
	int32_t MaxBatchSize; // 0x18(0x04)
	int32_t SecondsToLive; // 0x1c(0x04)
	struct FString SegmentId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerStatisticsRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString StatisticNames; // 0x18(0x10)
	struct TArray<struct UPlayFabJsonObject*> StatisticNameVersions; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	struct FString StatisticName; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayerTagsRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	struct FString Namespace; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	struct FString FacebookIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	struct FString FacebookInstantGamesIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> GenericIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	struct FString NintendoSwitchDeviceIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PSNAccountIDs; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	struct FString SteamStringIDs; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	struct FString Sandbox; // 0x08(0x10)
	struct FString XboxLiveAccountIDs; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetPublisherDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	struct FString Keys; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetRandomResultTablesRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString TableIDs; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	struct FString PlayFabIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetSharedGroupDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool GetMembers : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString Keys; // 0x10(0x10)
	struct FString SharedGroupId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerGetStoreItemsServerRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct FString StoreId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerGetTimeRequest
// Size: 0x08 (Inherited: 0x08)
struct FServerGetTimeRequest : FPlayFabRequestCommon {
};

// ScriptStruct PlayFab.ServerGetTitleDataRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	struct FString Keys; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetTitleNewsRequest
// Size: 0x10 (Inherited: 0x08)
struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PlayFab.ServerGetUserAccountInfoRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetUserBansRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGetUserDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString Keys; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerGetUserInventoryRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerGrantCharacterToUserRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	struct FString CharacterName; // 0x08(0x10)
	struct FString CharacterType; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerGrantItemsToCharacterRequest
// Size: 0x58 (Inherited: 0x08)
struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	struct FString Annotation; // 0x08(0x10)
	struct FString CatalogVersion; // 0x18(0x10)
	struct FString CharacterId; // 0x28(0x10)
	struct FString ItemIds; // 0x38(0x10)
	struct FString PlayFabId; // 0x48(0x10)
};

// ScriptStruct PlayFab.ServerGrantItemsToUserRequest
// Size: 0x48 (Inherited: 0x08)
struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	struct FString Annotation; // 0x08(0x10)
	struct FString CatalogVersion; // 0x18(0x10)
	struct FString ItemIds; // 0x28(0x10)
	struct FString PlayFabId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ServerGrantItemsToUsersRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct TArray<struct UPlayFabJsonObject*> ItemGrants; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerLinkPSNAccountRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	struct FString AuthCode; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool ForceLink : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t IssuerId; // 0x1c(0x04)
	struct FString PlayFabId; // 0x20(0x10)
	struct FString RedirectUri; // 0x30(0x10)
};

// ScriptStruct PlayFab.ServerLinkServerCustomIdRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString ServerCustomId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerLinkXboxAccountRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceLink : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString XboxToken; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerLoginWithServerCustomIdRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x10(0x08)
	struct FString PlayerSecret; // 0x18(0x10)
	struct FString ServerCustomId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerLoginWithXboxRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x10(0x08)
	struct FString XboxToken; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerLoginWithXboxIdRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool CreateAccount : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UPlayFabJsonObject* InfoRequestParameters; // 0x10(0x08)
	struct FString Sandbox; // 0x18(0x10)
	struct FString XboxId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerModifyItemUsesRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	struct FString ItemInstanceId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	int32_t UsesToAdd; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterRequest
// Size: 0x48 (Inherited: 0x08)
struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	struct FString GivingCharacterId; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
	struct FString ReceivingCharacterId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerRedeemCouponRequest
// Size: 0x48 (Inherited: 0x08)
struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString CouponCode; // 0x28(0x10)
	struct FString PlayFabId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ServerRedeemMatchmakerTicketRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
	struct FString Ticket; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRegisterGameRequest
// Size: 0x88 (Inherited: 0x08)
struct FServerRegisterGameRequest : FPlayFabRequestCommon {
	struct FString Build; // 0x08(0x10)
	struct FString GameMode; // 0x18(0x10)
	struct FString LobbyId; // 0x28(0x10)
	enum class ERegion Region; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FString ServerIPV4Address; // 0x40(0x10)
	struct FString ServerIPV6Address; // 0x50(0x10)
	struct FString ServerPort; // 0x60(0x10)
	struct FString ServerPublicDNSName; // 0x70(0x10)
	struct UPlayFabJsonObject* Tags; // 0x80(0x08)
};

// ScriptStruct PlayFab.ServerRemoveFriendRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	struct FString FriendPlayFabId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerRemoveGenericIDRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* GenericId; // 0x08(0x08)
	struct FString PlayFabId; // 0x10(0x10)
};

// ScriptStruct PlayFab.ServerRemovePlayerTagRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString TagName; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerRemoveSharedGroupMembersRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	struct FString PlayFabIds; // 0x08(0x10)
	struct FString SharedGroupId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerReportPlayerServerRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	struct FString Comment; // 0x08(0x10)
	struct FString ReporteeId; // 0x18(0x10)
	struct FString ReporterId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerRevokeAllBansForUserRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRevokeBansRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	struct FString BanIds; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerRevokeInventoryItemRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerRevokeInventoryItemsRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Items; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerSavePushNotificationTemplateRequest
// Size: 0x50 (Inherited: 0x08)
struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	struct FString AndroidPayload; // 0x08(0x10)
	struct FString ID; // 0x18(0x10)
	struct FString IOSPayload; // 0x28(0x10)
	struct UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38(0x08)
	struct FString Name; // 0x40(0x10)
};

// ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	struct FString Email; // 0x08(0x10)
	struct FString EmailTemplateId; // 0x18(0x10)
	struct FString Username; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerSendEmailFromTemplateRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	struct FString EmailTemplateId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerSendPushNotificationRequest
// Size: 0x60 (Inherited: 0x08)
struct FServerSendPushNotificationRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> AdvancedPlatformDelivery; // 0x08(0x10)
	struct FString Message; // 0x18(0x10)
	struct UPlayFabJsonObject* Package; // 0x28(0x08)
	struct FString Recipient; // 0x30(0x10)
	struct FString Subject; // 0x40(0x10)
	struct FString TargetPlatforms; // 0x50(0x10)
};

// ScriptStruct PlayFab.ServerSendPushNotificationFromTemplateRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	struct FString PushNotificationTemplateId; // 0x08(0x10)
	struct FString Recipient; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerSetFriendTagsRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	struct FString FriendPlayFabId; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
	struct FString Tags; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerSetGameServerInstanceDataRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	struct FString GameServerData; // 0x08(0x10)
	struct FString LobbyId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerSetGameServerInstanceStateRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
	enum class EGameInstanceState State; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PlayFab.ServerSetGameServerInstanceTagsRequest
// Size: 0x20 (Inherited: 0x08)
struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	struct FString LobbyId; // 0x08(0x10)
	struct UPlayFabJsonObject* Tags; // 0x18(0x08)
};

// ScriptStruct PlayFab.ServerSetPlayerSecretRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	struct FString PlayerSecret; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerSetPublisherDataRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	struct FString Key; // 0x08(0x10)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerSetTitleDataRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	struct FString Key; // 0x08(0x10)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerSubtractCharacterVirtualCurrencyRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString CharacterId; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
	struct FString VirtualCurrency; // 0x30(0x10)
};

// ScriptStruct PlayFab.ServerSubtractUserVirtualCurrencyRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString PlayFabId; // 0x10(0x10)
	struct FString VirtualCurrency; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerUnlinkPSNAccountRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerUnlinkServerCustomIdRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString ServerCustomId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerUnlinkXboxAccountRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	struct FString PlayFabId; // 0x08(0x10)
	struct FString XboxToken; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerUnlockContainerInstanceRequest
// Size: 0x58 (Inherited: 0x08)
struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString ContainerItemInstanceId; // 0x28(0x10)
	struct FString KeyItemInstanceId; // 0x38(0x10)
	struct FString PlayFabId; // 0x48(0x10)
};

// ScriptStruct PlayFab.ServerUnlockContainerItemRequest
// Size: 0x48 (Inherited: 0x08)
struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	struct FString CatalogVersion; // 0x08(0x10)
	struct FString CharacterId; // 0x18(0x10)
	struct FString ContainerItemId; // 0x28(0x10)
	struct FString PlayFabId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ServerUpdateAvatarUrlRequest
// Size: 0x28 (Inherited: 0x08)
struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	struct FString ImageUrl; // 0x08(0x10)
	struct FString PlayFabId; // 0x18(0x10)
};

// ScriptStruct PlayFab.ServerUpdateBansRequest
// Size: 0x18 (Inherited: 0x08)
struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	struct TArray<struct UPlayFabJsonObject*> Bans; // 0x08(0x10)
};

// ScriptStruct PlayFab.ServerUpdateCharacterDataRequest
// Size: 0x48 (Inherited: 0x08)
struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* Data; // 0x18(0x08)
	struct FString KeysToRemove; // 0x20(0x10)
	enum class EUserDataPermission Permission; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FString PlayFabId; // 0x38(0x10)
};

// ScriptStruct PlayFab.ServerUpdateCharacterStatisticsRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* CharacterStatistics; // 0x18(0x08)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerUpdatePlayerStatisticsRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool ForceUpdate : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString PlayFabId; // 0x10(0x10)
	struct TArray<struct UPlayFabJsonObject*> Statistics; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerUpdateSharedGroupDataRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	enum class EUserDataPermission Permission; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString SharedGroupId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerUpdateUserDataRequest
// Size: 0x38 (Inherited: 0x08)
struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	enum class EUserDataPermission Permission; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString PlayFabId; // 0x28(0x10)
};

// ScriptStruct PlayFab.ServerUpdateUserInternalDataRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Data; // 0x08(0x08)
	struct FString KeysToRemove; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
};

// ScriptStruct PlayFab.ServerUpdateUserInventoryItemDataRequest
// Size: 0x50 (Inherited: 0x08)
struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	struct FString CharacterId; // 0x08(0x10)
	struct UPlayFabJsonObject* Data; // 0x18(0x08)
	struct FString ItemInstanceId; // 0x20(0x10)
	struct FString KeysToRemove; // 0x30(0x10)
	struct FString PlayFabId; // 0x40(0x10)
};

// ScriptStruct PlayFab.ServerWriteServerCharacterEventRequest
// Size: 0x50 (Inherited: 0x08)
struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Body; // 0x08(0x08)
	struct FString CharacterId; // 0x10(0x10)
	struct FString EventName; // 0x20(0x10)
	struct FString PlayFabId; // 0x30(0x10)
	struct FString Timestamp; // 0x40(0x10)
};

// ScriptStruct PlayFab.ServerWriteServerPlayerEventRequest
// Size: 0x40 (Inherited: 0x08)
struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Body; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
	struct FString PlayFabId; // 0x20(0x10)
	struct FString Timestamp; // 0x30(0x10)
};

// ScriptStruct PlayFab.ServerWriteTitleEventRequest
// Size: 0x30 (Inherited: 0x08)
struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	struct UPlayFabJsonObject* Body; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
};

