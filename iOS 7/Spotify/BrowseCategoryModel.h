/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:58 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSURLConnectionDataDelegate.h>

@interface BrowseCategoryModel : NSObject <NSURLConnectionDataDelegate> {
	BOOL _loaded; 
	NSString* _categoryID; 
	NSString* _categoryTitle; 
	id<BrowseCategoryModelDelegate> _delegate; 
	NSArray* _filterList; 
	SPTrackContext* _categoryTopSongsContext; 
	NSMutableData* _data; 
	NSURLConnection* _currentConnection; 
	NSDictionary* _categoryData; 
	NSMutableArray* _categoryItemData; 
	NSMutableDictionary* _contextObservers; 
	NSMutableDictionary* _loadingItems; 
	SpotifyPreferences* _preferences; 
	NSDictionary* _subCategories; 
	BrowseGenresModel* _genresModel; 
}
@property (assign,nonatomic) BOOL loaded; 				//@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,copy) NSString* categoryID; 				//@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString* categoryTitle; 				//@synthesize categoryTitle=_categoryTitle - In the implementation block
@property (assign,nonatomic,__weak) id<BrowseCategoryModelDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray* filterList; 				//@synthesize filterList=_filterList - In the implementation block
@property (nonatomic,retain) SPTrackContext* categoryTopSongsContext; 				//@synthesize categoryTopSongsContext=_categoryTopSongsContext - In the implementation block
@property (nonatomic,retain) NSMutableData* data; 				//@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURLConnection* currentConnection; 				//@synthesize currentConnection=_currentConnection - In the implementation block
@property (nonatomic,retain) NSDictionary* categoryData; 				//@synthesize categoryData=_categoryData - In the implementation block
@property (nonatomic,retain) NSMutableArray* categoryItemData; 				//@synthesize categoryItemData=_categoryItemData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* contextObservers; 				//@synthesize contextObservers=_contextObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* loadingItems; 				//@synthesize loadingItems=_loadingItems - In the implementation block
@property (assign,nonatomic,__weak) SpotifyPreferences* preferences; 				//@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSDictionary* subCategories; 				//@synthesize subCategories=_subCategories - In the implementation block
@property (nonatomic,retain) BrowseGenresModel* genresModel; 				//@synthesize genresModel=_genresModel - In the implementation block
-(BOOL)isNewReleases;
-(unsigned)numberOfItemsUsingPredicate:(id)arg1;
-(id)dataForItemAtIndex:(int)arg1 usingPredicate:(id)arg2;
-(void)loadContextForLink:(id)arg1 forKey:(id)arg2;
-(int)indexOfItemWithURL:(id)arg1 usingPredicate:(id)arg2;
-(id)subCategoryKeyForIndex:(int)arg1;
-(id)predicateForSubcategory:(id)arg1;
-(id)subCategoryNameForIndex:(int)arg1;
-(id)initWithGenreItem:(id)arg1 preferences:(id)arg2 genresModel:(id)arg3;
-(void)setSubCategories:(id)arg1;
-(void)setGenresModel:(id)arg1;
-(void)setCurrentConnection:(id)arg1;
-(void)setCategoryTitle:(id)arg1;
-(void)setFilterList:(id)arg1;
-(void)filterUnavailableAlbums:(id)arg1;
-(id)getImageIDbyLinkIdentifier:(id)arg1;
-(unsigned)numberOfSubCategories;
-(void)didFinishLoadingContext:(id)arg1;
-(void)didFinishLoadingItemAtIndex:(int)arg1;
-(void)loadAlbums;
-(void)setCategoryTopSongsContext:(id)arg1;
-(void)setCategoryItemData:(id)arg1;
-(void)setContextObservers:(id)arg1;
-(void)setLoadingItems:(id)arg1;
-(void)didFinishLoading;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setData:(id)arg1;
-(void)setPreferences:(id)arg1;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)setCategoryData:(id)arg1;
-(void)setLoaded:(BOOL)arg1;
-(void).cxx_destruct;
@end