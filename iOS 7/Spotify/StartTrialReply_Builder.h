/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:19:14 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface StartTrialReply_Builder : PBGeneratedMessage_Builder {
	StartTrialReply* result; 
}
@property (retain) StartTrialReply* result; 
-(id)buildPartial;
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)internalGetResult;
-(id)clone;
-(id)clearSuccess;
-(id)defaultInstance;
-(BOOL)success;
-(void)dealloc;
-(id)init;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)build;
-(id)setSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
@end