/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:30 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAClockAdd : SADomainCommand {
}
@property (nonatomic,retain) SAClockObject* clockToAdd; 
+(id)add;
+(id)addWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setClockToAdd:(id)arg1;
@end