/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:17 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ProductStateViewModel : NSObject {
	NSArray* _productStateKeys; 
	NSDictionary* _productStateValuesForKeys; 
	NSArray* _filteredProductStateKeys; 
	NSPredicate* _filterPredicate; 
}
@property (nonatomic,retain) NSArray* productStateKeys; 				//@synthesize productStateKeys=_productStateKeys - In the implementation block
@property (nonatomic,retain) NSDictionary* productStateValuesForKeys; 				//@synthesize productStateValuesForKeys=_productStateValuesForKeys - In the implementation block
@property (nonatomic,copy) NSArray* filteredProductStateKeys; 				//@synthesize filteredProductStateKeys=_filteredProductStateKeys - In the implementation block
@property (nonatomic,retain) NSPredicate* filterPredicate; 				//@synthesize filterPredicate=_filterPredicate - In the implementation block
-(void)setProductStateKeys:(id)arg1;
-(void)setProductStateValuesForKeys:(id)arg1;
-(void)setFilteredProductStateKeys:(id)arg1;
-(void)reloadDataFromProductState:(id)arg1;
-(id)captionForIndex:(int)arg1;
-(id)valueForIndex:(int)arg1;
-(void)setFilterPredicate:(id)arg1;
-(void).cxx_destruct;
@end