/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:36 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMPSetState : SADomainCommand {
}
@property (assign,nonatomic) int state; 
+(id)setState;
+(id)setStateWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setState:(int)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end