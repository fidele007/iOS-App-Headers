/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:04 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMPSetPlaybackPosition : SADomainCommand {
}
@property (assign,nonatomic) int position; 
+(id)setPlaybackPosition;
+(id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setPosition:(int)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end