/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:15 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBOpenGraphActionShareDialogParams : FBDialogsParams {
	id<FBOpenGraphAction> _action; 
	NSString* _previewPropertyName; 
	NSString* _actionType; 
}
@property (nonatomic,retain) id<FBOpenGraphAction> action; 				//@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString* previewPropertyName; 				//@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (nonatomic,copy) NSString* actionType; 				//@synthesize actionType=_actionType - In the implementation block
+(id)getPostedObjectTypeFromObject:(id)arg1;
+(id)getIdOrUrlFromObject:(id)arg1;
-(id)dictionaryMethodArgs;
-(id)appBridgeVersion;
-(id)flattenObject:(id)arg1;
-(id)flattenGraphObjects:(id)arg1;
-(BOOL)containsUIImages:(id)arg1;
-(void)setPreviewPropertyName:(id)arg1;
-(id)validate;
-(void)dealloc;
-(void)setAction:(id)arg1;
-(void)setActionType:(id)arg1;
@end