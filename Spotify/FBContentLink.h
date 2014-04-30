/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:24 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBContentLink : NSObject {
	NSURL* targetURL; 
	NSArray* actionTypes; 
	NSString* source; 
	NSArray* ref; 
	NSDictionary* originalQueryParameters; 
}
@property (copy) NSURL* targetURL; 
@property (copy) NSArray* actionTypes; 
@property (copy) NSString* source; 
@property (copy) NSArray* ref; 
@property (copy) NSDictionary* originalQueryParameters; 
-(void)setActionTypes:(id)arg1;
-(void)setOriginalQueryParameters:(id)arg1;
-(void)dealloc;
-(id)initWithURL:(id)arg1;
-(void)setSource:(id)arg1;
-(void)setRef:(id)arg1;
-(void)setTargetURL:(id)arg1;
@end