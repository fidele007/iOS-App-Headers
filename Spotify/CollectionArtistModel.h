/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:06 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <CollectionArtistModel.h>

@interface CollectionArtistModel : NSObject <CollectionArtistModel> {
	SPCollectionController* _collection; 
	NSObject<SPCollectionAlbumList>* _albumList; 
	NSArray* collectionAlbums; 
	SPArtist* _artist; 
}
@property (nonatomic,copy) SPArtist* artist; 				//@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSArray* collectionAlbums; 
-(id)initWithCollection:(id)arg1 artist:(id)arg2;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void).cxx_destruct;
@end