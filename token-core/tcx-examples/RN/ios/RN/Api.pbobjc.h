// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GPBAny;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ApiRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface ApiRoot : GPBRootObject
@end

#pragma mark - TcxAction

typedef GPB_ENUM(TcxAction_FieldNumber) {
  TcxAction_FieldNumber_Method = 1,
  TcxAction_FieldNumber_Param = 2,
};

/**
 * Action Wrapper
 * There is a `call_tcx_api` method in tcx which act as a endpoint like RPC. It accepts a `TcxAction` param which method field is
 * the real action and param field is the real param of that method.
 * When an error occurred, the `call_tcx_api` will return a `Response` which isSuccess field be false and error field is the reason
 * which cause the error.
 **/
GPB_FINAL @interface TcxAction : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *method;

@property(nonatomic, readwrite, strong, null_resettable) GPBAny *param;
/** Test to see if @c param has been set. */
@property(nonatomic, readwrite) BOOL hasParam;

@end

#pragma mark - Response

typedef GPB_ENUM(Response_FieldNumber) {
  Response_FieldNumber_IsSuccess = 1,
  Response_FieldNumber_Error = 2,
};

/**
 * A common response when error occurred.
 **/
GPB_FINAL @interface Response : GPBMessage

@property(nonatomic, readwrite) BOOL isSuccess;

@property(nonatomic, readwrite, copy, null_resettable) NSString *error;

@end

#pragma mark - InitTokenCoreXParam

typedef GPB_ENUM(InitTokenCoreXParam_FieldNumber) {
  InitTokenCoreXParam_FieldNumber_FileDir = 1,
  InitTokenCoreXParam_FieldNumber_XpubCommonKey = 2,
  InitTokenCoreXParam_FieldNumber_XpubCommonIv = 3,
  InitTokenCoreXParam_FieldNumber_IsDebug = 4,
};

/**
 * FUNCTION: init_token_core_x(InitTokenCoreXParam)
 *
 * initialize tcx by passing fixtures folder and xpub encryption params
 **/
GPB_FINAL @interface InitTokenCoreXParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *fileDir;

@property(nonatomic, readwrite, copy, null_resettable) NSString *xpubCommonKey;

@property(nonatomic, readwrite, copy, null_resettable) NSString *xpubCommonIv;

@property(nonatomic, readwrite) BOOL isDebug;

@end

#pragma mark - ExportPrivateKeyParam

typedef GPB_ENUM(ExportPrivateKeyParam_FieldNumber) {
  ExportPrivateKeyParam_FieldNumber_Id_p = 1,
  ExportPrivateKeyParam_FieldNumber_Password = 2,
  ExportPrivateKeyParam_FieldNumber_ChainType = 3,
  ExportPrivateKeyParam_FieldNumber_Network = 4,
  ExportPrivateKeyParam_FieldNumber_MainAddress = 5,
  ExportPrivateKeyParam_FieldNumber_Path = 6,
};

/**
 *
 * // FUNCTION: export_private_key(ExportPrivateKeyParam): KeystoreCommonExportResult
 * //
 * // export the private key from a private key fixtures or a hd fixtures
 **/
GPB_FINAL @interface ExportPrivateKeyParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *network;

@property(nonatomic, readwrite, copy, null_resettable) NSString *mainAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSString *path;

@end

#pragma mark - WalletKeyParam

typedef GPB_ENUM(WalletKeyParam_FieldNumber) {
  WalletKeyParam_FieldNumber_Id_p = 1,
  WalletKeyParam_FieldNumber_Password = 2,
};

/**
 *
 * /// Keystore Common
 *
 * // FUNCTION: keystore_common_verify(WalletKeyParam) -> Response
 * //
 * // verify the password of the fixtures
 **/
GPB_FINAL @interface WalletKeyParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
