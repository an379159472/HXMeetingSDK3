//
//  HXiOSMeetingSDK.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/17.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

@class HXMeetingService;

@interface HXiOSMeetingSDK : NSObject

@property (nonatomic, strong) NSString * _Nullable token;

@property (nonatomic, strong) NSString *_Nullable userid;

@property (nonatomic, strong) NSString * _Nullable userTel;

@property (nonatomic, strong) NSString * _Nullable baseUrl;

@property (nonatomic, strong, readonly) NSString * _Nullable baseImageUrl;

@property (nonatomic, strong, readonly) NSString * _Nullable uploadBaseUrl;

@property (nonatomic, strong, readonly) NSString * _Nullable behaviorVerificationUrl;


@property (nonatomic, strong) NSString * _Nullable pushToken;

// token过期
@property (nonatomic, copy) void (^ _Nullable tokenExpiresBlock)(void);

// 会议暂未开启
@property (nonatomic, copy) void (^ _Nullable joinMeetNotStartBlock)(NSString * _Nullable errorMsg);


+ (instancetype _Nonnull )share;

- (HXMeetError)initSDKWithServer:(NSString *_Nonnull)server SdkKye:(NSString * _Nonnull)sdkKye SdkSecret:(NSString * _Nonnull)sdkSecret IsPad:(BOOL)isPad;

- (void)updateToken:(NSString *_Nonnull)token userid:(NSString *_Nonnull)userid userTel:(NSString *_Nonnull)userTel;

- (void)disconnectWebSocket;

- (nullable HXMeetingService *)getMeetingService;

- (void)uploadFile:(NSString *_Nullable)filePath callback:(void (^_Nullable)(int32_t statusCode, NSString * _Nullable recvData))callback;

- (void)sdkLog:(NSString *_Nullable)text;

- (void)setupPushToken:(NSString *_Nullable)pushToken;

@end

