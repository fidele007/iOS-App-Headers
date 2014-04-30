/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:29 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBGraphObjectPagingLoaderDelegate.h>

@interface FBPlacePickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {
	BOOL _hasCompletedFetch; 
	int _radiusInMeters; 
	int _resultsLimit; 
	NSString* _searchText; 
	NSSet* _fieldsForRequest; 
	FBGraphObjectPagingLoader* _loader; 
	struct {
		double latitude;
		double longitude;
	} _locationCoordinate; 
}
@property (assign,nonatomic) struct locationCoordinate; 				//@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) int radiusInMeters; 				//@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) int resultsLimit; 				//@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString* searchText; 				//@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSSet* fieldsForRequest; 				//@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader* loader; 				//@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch; 				//@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
-(void)setResultsLimit:(int)arg1;
-(void)setRadiusInMeters:(int)arg1;
-(void)setLocationCoordinate:(struct )arg1;
-(void)setFieldsForRequest:(id)arg1;
-(id)initWithLocationCoordinate:(struct )arg1 radiusInMeters:(int)arg2 searchText:(id)arg3 resultsLimit:(int)arg4 fieldsForRequest:(id)arg5;
-(void)pagingLoaderDidFinishLoading:(id)arg1;
-(void)setHasCompletedFetch:(BOOL)arg1;
-(void)prefetchAndCacheForSession:(id)arg1;
-(void)dealloc;
-(void)setSearchText:(id)arg1;
-(void)setLoader:(id)arg1;
@end