/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:40 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAUIUnlockDevice : SABaseClientBoundCommand {
}
@property (nonatomic,copy) NSArray* cancellationCommands; 
@property (nonatomic,copy) NSArray* failureCommands; 
@property (nonatomic,copy) NSArray* successCommands; 
+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setCancellationCommands:(id)arg1;
-(void)setFailureCommands:(id)arg1;
-(void)setSuccessCommands:(id)arg1;
@end