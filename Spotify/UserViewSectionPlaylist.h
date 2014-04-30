/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:11 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UserViewSectionPlaylist : ArtistViewSectionAlbum {
	SPPlaylist* _playlist; 
	NSObject* _data; 
}
@property (nonatomic,retain) SPPlaylist* playlist; 				//@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,copy) unsigned numberOfVisibleTracks; 
@property (nonatomic,retain) NSObject* data; 				//@synthesize data=_data - In the implementation block
-(float)heightForRow:(int)arg1;
-(BOOL)sectionWithInlineHeader;
-(void)setPlaylist:(id)arg1;
-(id)objectAtRow:(int)arg1;
-(void)setData:(id)arg1;
-(int)numberOfRowsInSection;
-(void).cxx_destruct;
@end