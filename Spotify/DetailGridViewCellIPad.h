/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:08 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface DetailGridViewCellIPad : KKGridViewCell {
	DetailGridViewIPad* _detailView; 
}
@property (nonatomic,retain) DetailGridViewIPad* detailView; 				//@synthesize detailView=_detailView - In the implementation block
@property (nonatomic,retain) SPAsyncImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
-(void)setFriend:(id)arg1 withMode:(int)arg2;
-(void)setPlaylistInfo:(id)arg1;
-(void)setFacebookFriend:(id)arg1 withMode:(int)arg2;
-(void)setPlaylist:(id)arg1;
-(void)setCustomTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
-(void)setDetailView:(id)arg1;
-(void)setArtist:(id)arg1;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2;
-(void)setImageView:(id)arg1;
-(void)setAlbum:(id)arg1;
-(void)setTrack:(id)arg1;
-(void).cxx_destruct;
@end