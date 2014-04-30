/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:01 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <KKGridViewDataSource.h>
#import <KKGridViewDelegate.h>

@interface KKGridViewController : UIViewController <KKGridViewDataSource, KKGridViewDelegate> {
	KKGridView* _gridView; 
}
@property (nonatomic,retain) KKGridView* gridView; 				//@synthesize gridView=_gridView - In the implementation block
-(unsigned)gridView:(id)arg1 numberOfItemsInSection:(unsigned)arg2;
-(id)gridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
-(void)loadView;
-(void)setGridView:(id)arg1;
-(void).cxx_destruct;
@end