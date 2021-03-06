/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAWebSearch : SADomainCommand {
}
@property (nonatomic,copy) NSString* provider; 
@property (nonatomic,copy) NSString* query; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2;
+(id)search;
-(void)setQuery:(id)arg1;
-(id)groupIdentifier;
-(void)setProvider:(id)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end