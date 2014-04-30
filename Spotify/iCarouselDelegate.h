/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:12 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol iCarouselDataSource
@optional
-(id)carousel(id):arg1 placeholderViewAtIndex(unsigned):arg2 reusingView(id):arg3 ;
-(id)carousel(id):arg1 placeholderViewAtIndex(unsigned):arg2 ;
-(id)carousel(id):arg1 viewForItemAtIndex(unsigned):arg2 ;
-(unsigned)numberOfPlaceholdersInCarousel(id):arg1 ;
-(unsigned)numberOfVisibleItemsInCarousel(id):arg1 ;
@required
-(id)carousel(id):arg1 viewForItemAtIndex(unsigned):arg2 reusingView(id):arg3 ;
-(unsigned)numberOfItemsInCarousel(id):arg1 ;
-(id)carousel(id):arg1 viewForItemAtIndex(unsigned):arg2 reusingView(id):arg3 ;
-(unsigned)numberOfItemsInCarousel(id):arg1 ;
@end

@protocol iCarouselDelegate
@optional
-(float)carousel(id):arg1 itemAlphaForOffset(float):arg2 ;
-(float)carousel(id):arg1 valueForTransformOption(int):arg2 withDefault(float):arg3 ;
-({)carousel(unsigned char):arg1 itemTransformForOffset(A):arg2 baseTransform(T):arg3 ;
-({)carousel(unsigned char):arg1 transformForItemView(A):arg2 withOffset(T):arg3 ;
-(float)carouselItemWidth(id):arg1 ;
-(BOOL)carouselShouldWrap(id):arg1 ;
-(float)carouselOffsetMultiplier(id):arg1 ;
-(void)carouselWillBeginScrollingAnimation(id):arg1 ;
-(void)carouselDidEndScrollingAnimation(id):arg1 ;
-(void)carouselDidEndDecelerating(id):arg1 ;
-(void)carouselDidScroll(id):arg1 ;
-(void)carouselCurrentItemIndexUpdated(id):arg1 ;
-(BOOL)carousel(id):arg1 shouldSelectItemAtIndex(int):arg2 ;
-(void)carousel(id):arg1 didSelectItemAtIndex(int):arg2 ;
-(void)carouselWillBeginDragging(id):arg1 ;
-(void)carouselDidEndDragging(id):arg1 willDecelerate(BOOL):arg2 ;
-(void)carouselWillBeginDecelerating(id):arg1 ;
@end
