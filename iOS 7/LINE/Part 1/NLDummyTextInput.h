/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:18 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIKeyInput.h>

@interface NLDummyTextInput : UIView <UIKeyInput> {
}
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasText;
-(void)insertText:(id)arg1;
-(void)deleteBackward;
@end