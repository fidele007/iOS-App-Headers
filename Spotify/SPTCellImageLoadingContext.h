/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTCellImageLoadingContext : NSObject {
	id<SPTCellImageLoadingContextCompatibleCell> _cell; 
	NSIndexPath* _indexPath; 
}
@property (assign,nonatomic,__weak) id<SPTCellImageLoadingContextCompatibleCell> cell; 				//@synthesize cell=_cell - In the implementation block
@property (nonatomic,copy) NSIndexPath* indexPath; 				//@synthesize indexPath=_indexPath - In the implementation block
+(id)contextForCell:(id)arg1 indexPath:(id)arg2;
-(void)setImage:(id)arg1 forCellInTableView:(id)arg2;
-(void)setImage:(id)arg1 forCellInTableView:(id)arg2 animated:(BOOL)arg3;
-(void)setImage:(id)arg1 forCellInCollectionView:(id)arg2 animated:(BOOL)arg3;
-(BOOL)tableViewIndexPathIsValid:(id)arg1;
-(BOOL)collectionViewIndexPathIsValid:(id)arg1;
-(void)setImage:(id)arg1 forCellInCollectionView:(id)arg2;
-(void)setCell:(id)arg1;
-(void)setIndexPath:(id)arg1;
-(void).cxx_destruct;
@end