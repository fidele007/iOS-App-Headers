/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:59 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <LineStickerDataSource.h>
#import <LineKeyboardDelegate.h>
typedef struct{
	long long value1;
	int value2;
	int value3;
	int value4;
} WCStruct_qiii;


@interface LineStickerDataSourceManager : NSObject <LineStickerDataSource, LineKeyboardDelegate> {
	id<LineStickerEventDelegate> _delegate; 
}
+(id)allocWithZone:(NSZone*)arg1;
+(id)sharedDataSource;
-(void)lineKeyboardWillDeleteBackwards:(id)arg1;
-(void)lineKeyboardDidDeleteBackwards:(id)arg1;
-(void)lineKeyboard:(id)arg1 stickerTapped:(int)arg2;
-(void)downloadImageOfType:(unsigned)arg1 forSticker:(id)arg2 completionBlock:(id)arg3;
-(id)_packageWithDictionary:(id)arg1 stickerTuple:(WCStruct_qiii*)arg2;
-(CGSize)sizeForRegularSticker:(id)arg1;
-(id)_packageWithDictionary:(id)arg1;
-(id)_dictionaryForStickerID:(int)arg1;
-(void)downloadImageForRegularSticker:(id)arg1 completionBlock:(id)arg2;
-(void)downloadImageForKeyboardSticker:(id)arg1 completionBlock:(id)arg2;
-(float)heightForRegularSticker:(id)arg1;
-(float)heightForKeyboardSticker:(id)arg1;
-(CGSize)sizeForKeyboardSticker:(id)arg1;
-(BOOL)isStickerPackagePurchased:(id)arg1;
-(id)lineStickerKeyboardInputViewDelegate:(id)arg1 topBorder:(id)arg2;
-(id)lineStickerKeyboardInputViewDelegate:(id)arg1 backgroundImage:(id)arg2;
-(void)stickerTapped:(id)arg1 viewController:(id)arg2;
-(id)copyWithZone:(NSZone*)arg1;
@end