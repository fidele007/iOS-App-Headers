/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:28 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBGraphObjectPagingLoaderDelegate.h>

@interface FBFriendPickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {
	BOOL _hasCompletedFetch; 
	BOOL _usePageLimitOfOne; 
	NSSet* _fieldsForRequest; 
	NSString* _userID; 
	FBGraphObjectPagingLoader* _loader; 
}
@property (nonatomic,copy) NSSet* fieldsForRequest; 				//@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,copy) NSString* userID; 				//@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader* loader; 				//@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch; 				//@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (assign,nonatomic) BOOL usePageLimitOfOne; 				//@synthesize usePageLimitOfOne=_usePageLimitOfOne - In the implementation block
-(void)setFieldsForRequest:(id)arg1;
-(void)pagingLoaderDidFinishLoading:(id)arg1;
-(id)initWithUserID:(id)arg1 fieldsForRequest:(id)arg2;
-(void)setUsePageLimitOfOne:(BOOL)arg1;
-(id)initWithUserID:(id)arg1;
-(id)initWithFieldsForRequest:(id)arg1;
-(void)setUsePageLimitOfOne;
-(void)setHasCompletedFetch:(BOOL)arg1;
-(void)prefetchAndCacheForSession:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setUserID:(id)arg1;
-(void)setLoader:(id)arg1;
@end