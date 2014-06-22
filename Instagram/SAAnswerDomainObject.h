/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:12 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAAnswerDomainObject : SADomainObject {
}
@property (nonatomic,retain) SAUIAppPunchOut* appPunchOut; 
@property (nonatomic,copy) NSString* category; 
@property (nonatomic,retain) SAAnswerDirectAnswer* directAnswer; 
@property (nonatomic,copy) NSArray* linkedAnswerGroups; 
@property (nonatomic,copy) NSArray* structuredAnswers; 
+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setCategory:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setAppPunchOut:(id)arg1;
-(void)setDirectAnswer:(id)arg1;
-(void)setLinkedAnswerGroups:(id)arg1;
-(void)setStructuredAnswers:(id)arg1;
@end