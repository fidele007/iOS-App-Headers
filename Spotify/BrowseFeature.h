/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:43 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol BrowseGenresModelDelegate
@optional
-(void)genresModel(id):arg1 didLoadWithError(id):arg2 ;
@end

@protocol SPFeature
@optional
+(id)featureDependencies;
-(void)load;
@required
+(id)featureIdentifier;
-(void)configureWithFeatures(id):arg1 ;
-(void)unload;
-(void)configureWithFeatures(id):arg1 ;
-(void)unload;
@end

@protocol BrowseFeature
@required
-(id)provideBrowseRootViewController;
-(id)provideBrowseRootViewController;
@end