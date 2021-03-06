/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:11 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <LineStickerPackageManagerDelegate.h>

@interface UsableStickerList : NSObject <LineStickerPackageManagerDelegate> {
	id mDelegate; 
	BOOL mIsFetching; 
	struct _NSRange mRange; 
	unsigned mFetchCount; 
	BOOL mHasNext; 
	NSError* mError; 
	int cntDownloadableStickers; 
	NSArray* defaultPackageList; 
	NSMutableArray* packageList; 
	NSMutableArray* downloadProductList; 
}
@property (assign,nonatomic) int cntDownloadableStickers; 
@property (nonatomic,retain) NSMutableArray* packageList; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,retain) NSMutableArray* downloadProductList; 
@property (nonatomic,retain) NSArray* defaultPackageList; 
-(void)stickerPackageAddedToKeyboard:(id)arg1;
-(void)stickerPackageChanged:(id)arg1;
-(void)stickerPackageRemoved:(id)arg1;
-(void)stickerPackage:(id)arg1 movedFromIndex:(unsigned)arg2 toIndex:(unsigned)arg3;
-(void)updateUsablePackages;
-(id)stickerPackageAtIndex:(unsigned)arg1;
-(unsigned)indexOfPackage:(id)arg1;
-(void)fetchNext;
-(void)setDefaultPackageList:(id)arg1;
-(void)addPackage:(id)arg1;
-(void)addPackageWithProduct:(id)arg1;
-(void)reloadUsablePackages;
-(void)removePackage:(id)arg1;
-(void)setCntDownloadableStickers:(int)arg1;
-(void)setPackageList:(id)arg1;
-(void)setDownloadProductList:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(unsigned)count;
-(BOOL)isFetching;
-(BOOL)hasNext;
-(id)initWithDelegate:(id)arg1;
-(id)error;
-(void).cxx_destruct;
@end