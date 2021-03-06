/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:41 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAAnswerDirectAnswer : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSString* answer; 
@property (nonatomic,retain) SAAnswerSpeakableAnswer* speakableAnswer; 
+(id)directAnswer;
+(id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAnswer:(id)arg1;
-(void)setSpeakableAnswer:(id)arg1;
@end