/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:51 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSData* activationToken; 
@property (nonatomic,copy) NSString* assistantId; 
@property (nonatomic,copy) NSString* connectionType; 
@property (nonatomic,copy) NSString* language; 
@property (nonatomic,copy) NSData* sessionValidationData; 
@property (nonatomic,copy) NSString* speechId; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)loadAssistant;
+(id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setLanguage:(id)arg1;
-(void)setConnectionType:(id)arg1;
-(id)encodedClassName;
-(void)setActivationToken:(id)arg1;
-(void)setAssistantId:(id)arg1;
-(void)setSpeechId:(id)arg1;
-(void)setSessionValidationData:(id)arg1;
@end