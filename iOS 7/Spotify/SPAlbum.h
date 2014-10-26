/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPAlbum : SPObject {
}
@property (nonatomic,copy) SPURL* coverImageLink; 
@property (nonatomic,copy) NSString* name; 
@property (nonatomic,copy) NSData* ident; 
@property (nonatomic,copy) SPURL* link; 
@property (getter=isLoaded,nonatomic,copy) BOOL loaded; 
@property (nonatomic,copy) int popularity; 
@property (nonatomic,copy) int tracks; 
@property (nonatomic,copy) int discs; 
@property (nonatomic,copy) int year; 
@property (nonatomic,copy) BOOL albumType; 
@property (nonatomic,copy) SPArtist* artist; 
@property (nonatomic,copy) BOOL isAvailable; 
+(id)albumFromLink:(id)arg1;
+(id)albumWithAlbumInfo:(struct rAlbumInfo*)arg1;
+(id)albumFromId:(struct NSData*)arg1;
-(struct RefCountedInterface*)cpp;
-(id)imageLinkOfSize:(int)arg1;
-(BOOL)isAlbum;
-(struct rAlbumInfo*)albumInfo;
-(BOOL)isSingle;
-(int)comparePopularity:(id)arg1;
-(unsigned)hash;
-(BOOL)isCompilation;
@end