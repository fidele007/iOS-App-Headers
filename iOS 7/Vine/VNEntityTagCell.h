/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:52 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNEntityTagCell : UITableViewCell {
	VNFontLabelSemibold* _tagLabel; 
	VNTag* _tagObject; 
}
@property (assign,nonatomic,__weak) VNFontLabelSemibold* tagLabel; 				//@synthesize tagLabel=_tagLabel - In the implementation block
@property (nonatomic,retain) VNTag* tagObject; 				//@synthesize tagObject=_tagObject - In the implementation block
-(void)setTagObject:(id)arg1;
-(void)setTagLabel:(id)arg1;
-(void).cxx_destruct;
@end