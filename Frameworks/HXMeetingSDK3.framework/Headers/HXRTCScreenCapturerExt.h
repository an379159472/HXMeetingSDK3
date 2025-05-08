
#pragma once

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <ReplayKit/ReplayKit.h>

NS_ASSUME_NONNULL_BEGIN
#define HX_RTC_EXPORT __attribute__((visibility("default")))

HX_RTC_EXPORT @protocol HXRtcScreenCapturerExtDelegate <NSObject>

- (void)onQuitFromRtc;

- (void)onReceiveFromRtc:(NSData *)message;

- (void)onRtcDisconnect;

- (void)onRtcConnect;

- (void)onRtcRunning;
@end


HX_RTC_EXPORT @interface HXRtcScreenCapturerExt : NSObject

@property (readonly, class) HXRtcScreenCapturerExt *shared;

@property (nonatomic, weak, nullable) NSObject<HXRtcScreenCapturerExtDelegate> *delegate;

- (void)startWithDelegate:(NSObject<HXRtcScreenCapturerExtDelegate> *)delegate groupId:(NSString *)groupId;

- (void)stop;

- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer withType:(RPSampleBufferType)sampleBufferType API_AVAILABLE(ios(10));
@end

NS_ASSUME_NONNULL_END
