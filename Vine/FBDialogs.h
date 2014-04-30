/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:09 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBDialogs : NSObject {
}
+(id)presentLoginDialogWithParams:(id)arg1 clientState:(id)arg2 handler:(id)arg3;
+(BOOL)presentOSIntegratedShareDialogModallyFrom:(id)arg1 initialText:(id)arg2 image:(id)arg3 url:(id)arg4 handler:(id)arg5;
+(BOOL)presentOSIntegratedShareDialogModallyFrom:(id)arg1 initialText:(id)arg2 images:(id)arg3 urls:(id)arg4 handler:(id)arg5;
+(BOOL)presentOSIntegratedShareDialogModallyFrom:(id)arg1 session:(id)arg2 initialText:(id)arg3 images:(id)arg4 urls:(id)arg5 handler:(id)arg6;
+(BOOL)canPresentOSIntegratedShareDialogWithSession:(id)arg1;
+(id)composeViewControllerWithSession:(id)arg1 handler:(id)arg2;
+(id)presentShareDialogWithLink:(id)arg1 name:(id)arg2 caption:(id)arg3 description:(id)arg4 picture:(id)arg5 clientState:(id)arg6 handler:(id)arg7;
+(id)presentShareDialogWithParams:(id)arg1 clientState:(id)arg2 handler:(id)arg3;
+(id)presentShareDialogWithOpenGraphAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 clientState:(id)arg4 handler:(id)arg5;
+(id)presentShareDialogWithOpenGraphActionParams:(id)arg1 clientState:(id)arg2 handler:(id)arg3;
+(id)createError:(id)arg1 session:(id)arg2;
+(BOOL)canPresentLoginDialogWithParams:(id)arg1;
+(BOOL)canPresentShareDialogWithParams:(id)arg1;
+(id)presentShareDialogWithLink:(id)arg1 handler:(id)arg2;
+(id)presentShareDialogWithLink:(id)arg1 name:(id)arg2 handler:(id)arg3;
+(BOOL)canPresentShareDialogWithOpenGraphActionParams:(id)arg1;
+(id)presentShareDialogWithOpenGraphAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 handler:(id)arg4;
@end