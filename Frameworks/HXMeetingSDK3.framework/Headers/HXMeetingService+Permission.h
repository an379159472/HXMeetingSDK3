//
//  HXMeetingService+Permission.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2025/3/5. 权限许可
//

#import <HXMeetingSDK3/HXMeetingService.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Permission)

///更新音视频频权限
- (void)updateAudioAndVideoPermission;

///更新音频权限
- (BOOL)updateAudioPermission;

///更新视频权限
- (BOOL)updateVideoPermission;



@end

NS_ASSUME_NONNULL_END
