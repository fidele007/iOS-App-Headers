/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:09 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableViewLayoutDelegate.h>

@interface SPTArtistTracksTableViewDataSource : SPTArtistArrayTableViewDataSource <SPTThemableViewLayoutDelegate> {
	id<SPTArtistContextMenuPresenter> _contextMenuPresenter; 
	NSNumberFormatter* _playcountFormatter; 
	SessionController* _sessionController; 
	id<SPTArtistNowPlayingTrackProvider> _nowPlayingProvider; 
}
@property (assign,nonatomic,__weak) id<SPTArtistContextMenuPresenter> contextMenuPresenter; 				//@synthesize contextMenuPresenter=_contextMenuPresenter - In the implementation block
@property (nonatomic,retain) NSNumberFormatter* playcountFormatter; 				//@synthesize playcountFormatter=_playcountFormatter - In the implementation block
@property (assign,nonatomic,__weak) SessionController* sessionController; 				//@synthesize sessionController=_sessionController - In the implementation block
@property (assign,nonatomic,__weak) id<SPTArtistNowPlayingTrackProvider> nowPlayingProvider; 				//@synthesize nowPlayingProvider=_nowPlayingProvider - In the implementation block
-(void)themableViewDidUpdateLayout:(id)arg1;
-(void)setSessionController:(id)arg1;
-(id)initWithTableView:(id)arg1 contextMenuPresenter:(id)arg2 sessionController:(id)arg3 nowPlayingProvider:(id)arg4;
-(void)prepareCell:(id)arg1 withItem:(id)arg2 index:(unsigned)arg3 count:(unsigned)arg4;
-(void)contextMenuButtonTapped:(id)arg1;
-(void)setContextMenuPresenter:(id)arg1;
-(void)setPlaycountFormatter:(id)arg1;
-(void)setNowPlayingProvider:(id)arg1;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(void).cxx_destruct;
@end