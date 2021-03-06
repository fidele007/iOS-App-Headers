/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:11 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSArray* restrictionsToAdd; 
@property (nonatomic,copy) NSArray* restrictionsToRemove; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)updateRestrictions;
+(id)updateRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setRestrictionsToAdd:(id)arg1;
-(void)setRestrictionsToRemove:(id)arg1;
@end