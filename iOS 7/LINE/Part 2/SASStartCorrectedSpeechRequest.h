/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SASStartCorrectedSpeechRequest : SAStartRequest {
}
@property (nonatomic,copy) NSString* interactionId; 
@property (nonatomic,copy) NSString* sessionId; 
+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSessionId:(id)arg1;
-(void)setInteractionId:(id)arg1;
@end