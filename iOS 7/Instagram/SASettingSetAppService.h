/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:05 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SASettingAppSettingCommand.h>

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand> {
}
@property (nonatomic,copy) NSString* appWithSettingsId; 
@property (nonatomic,copy) NSString* location; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
@property (nonatomic,@dynamic,copy) NSString* appId; 
@property (nonatomic,@dynamic,copy) NSArray* callbacks; 
+(id)setAppService;
+(id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAppWithSettingsId:(id)arg1;
-(void)setLocation:(id)arg1;
@end