/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:12 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSNumber* atRequestedLocation; 
@property (nonatomic,copy) NSArray* fmfLocations; 
@property (nonatomic,copy) NSURL* searchContext; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setSearchContext:(id)arg1;
-(id)encodedClassName;
-(void)setAtRequestedLocation:(id)arg1;
-(void)setFmfLocations:(id)arg1;
@end