/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:23 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol BrowseGenresModelDelegate
@optional
-(void)genresModel(id):arg1 didLoadWithError(id):arg2 ;
@end

@protocol SPForegroundObserverDelegate
@required
-(void)foregroundObserverDidAwake(id):arg1 ;
-(void)foregroundObserverDidHibernate(id):arg1 ;
-(void)foregroundObserverDidAwake(id):arg1 ;
-(void)foregroundObserverDidHibernate(id):arg1 ;
@end

@protocol BrowseFeaturedPlaylistsModelDelegate
@optional
-(void)featuredPlaylistModel(id):arg1 didLoadWithError(id):arg2 ;
@end

@protocol SPTHTTPImageLoaderDelegate
@optional
-(void)imageLoader(id):arg1 didFailToLoadImageForURL(id):arg2 context(id):arg3 error(id):arg4 ;
@required
-(void)imageLoader(id):arg1 didFinishLoadingImage(id):arg2 forURL(id):arg3 context(id):arg4 loadedSynchronously(BOOL):arg5 ;
-(void)imageLoader(id):arg1 didFinishLoadingImage(id):arg2 forURL(id):arg3 context(id):arg4 loadedSynchronously(BOOL):arg5 ;
@end

@protocol SPTBrowseHeaderDelegate
@optional
-(void)browseHeaderToplistShortcutTapped(id):arg1 ;
-(void)browseHeaderNewReleasesShortcutTapped(id):arg1 ;
@required
-(void)browseHeader(id):arg1 didTapPlaylist(id):arg2 ;
-(void)browseHeader(id):arg1 didTapPlaylist(id):arg2 ;
@end
