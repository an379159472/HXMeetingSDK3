//
//  HXWhiteBoardAssistModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2025/3/11.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXWhiteBoardAssistModel : NSObject
@property (nonatomic, strong) NSString *memuuid;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *userAvatar;
@property (nonatomic, assign) HXMeetingMemRoleType memRoleType;
@end

NS_ASSUME_NONNULL_END
