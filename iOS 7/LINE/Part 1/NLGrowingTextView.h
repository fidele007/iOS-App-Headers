/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:24 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NLTextViewDelegate.h>
#import <UIKeyInput.h>

@interface NLGrowingTextView : UIView <NLTextViewDelegate, UIKeyInput> {
	BOOL _iOS7; 
	NLDummyTextInput* _dummyTextInput; 
	BOOL _isAcceptingAutoCorrection; 
	float _minHeight; 
	BOOL _didInputEnterKey; 
	BOOL _lastTouchPositionWasInside; 
	UIFont* _font; 
	UIColor* _textColor; 
	id<NLGrowingTextViewDelegate> _delegate; 
	float _maxHeight; 
	int _maxNumberOfLines; 
	int _inputMaxLength; 
	UIColor* _recallUserTextColor; 
	UIColor* _recallUserBackgroundColor; 
	UIView* _placeholderView; 
	NLTextView* _internalTextView; 
}
@property (assign,nonatomic) id<NLGrowingTextViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float maxHeight; 				//@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) int maxNumberOfLines; 				//@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (assign,nonatomic) int inputMaxLength; 				//@synthesize inputMaxLength=_inputMaxLength - In the implementation block
@property (nonatomic,retain) NSString* rawString; 
@property (nonatomic,copy) NSArray* allTextMetadataArray; 
@property (assign,nonatomic) BOOL lastTouchPositionWasInside; 				//@synthesize lastTouchPositionWasInside=_lastTouchPositionWasInside - In the implementation block
@property (nonatomic,retain) UIColor* recallUserTextColor; 				//@synthesize recallUserTextColor=_recallUserTextColor - In the implementation block
@property (nonatomic,retain) UIColor* recallUserBackgroundColor; 				//@synthesize recallUserBackgroundColor=_recallUserBackgroundColor - In the implementation block
@property (nonatomic,retain) UIView* placeholderView; 				//@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) NSAttributedString* attributedText; 
@property (nonatomic,retain) NSString* text; 
@property (assign,nonatomic) struct _NSRange selectedRange; 
@property (nonatomic,retain) UIFont* font; 				//@synthesize font=_font - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) int keyboardType; 
@property (nonatomic,retain) UIView* inputView; 
@property (nonatomic,retain) UIColor* textColor; 				//@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSDictionary* defaultTypingAttributes; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isActionDisabled,nonatomic) BOOL actionDisabled; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (nonatomic,retain) NLTextView* internalTextView; 				//@synthesize internalTextView=_internalTextView - In the implementation block
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
+(void)initialize;
-(void)adjustViewHeightIfNeeded;
-(void)acceptAutoCorrectionSuggestion;
-(void)setActionDisabled:(BOOL)arg1;
-(id)rawStringWithOptions:(unsigned)arg1;
-(void)setRawString:(id)arg1;
-(BOOL)respondsToAttributedText;
-(void)handleSticonImageChangedNotification:(id)arg1;
-(float)heightForNumberOfLines:(int)arg1;
-(id)attributedStringWithTextMetadata:(id)arg1;
-(BOOL)insertAttributedString:(id)arg1 withTextMetadataArray:(id)arg2;
-(void)insertAttributedString:(id)arg1;
-(id)attributedStringAndTextMetadataArrayWithRawString:(id)arg1 andMaxLength:(unsigned)arg2;
-(void)insertTextAttachmentWithMetadata:(id)arg1;
-(void)invokeWillChangeHeightDelegate:(float)arg1;
-(void)resizeTextView:(float)arg1;
-(void)invokeDidChangeHeightDelegate:(float)arg1;
-(void)adjustScrollPosition;
-(void)insertRawSticonString:(id)arg1;
-(void)textViewDidTapTextView:(id)arg1;
-(BOOL)canInsertText:(id)arg1;
-(id)rawStringAndTextMetadataWithOptions:(unsigned)arg1;
-(void)restoreTextMetadata:(id)arg1;
-(void)insertUserRecallWithUserName:(id)arg1 andMID:(id)arg2;
-(BOOL)isUserRecallExistsWithMID:(id)arg1;
-(unsigned)numberOfUserRecalls;
-(BOOL)userRecallExistsAtLocation:(unsigned)arg1 effectiveRange:(struct _NSRange*)arg2;
-(void)resetUserRecalls;
-(void)setInputMaxLength:(int)arg1;
-(void)setLastTouchPositionWasInside:(BOOL)arg1;
-(void)setRecallUserTextColor:(id)arg1;
-(void)setRecallUserBackgroundColor:(id)arg1;
-(void)setInternalTextView:(id)arg1;
-(void)setPlaceholderView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)initialize;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setFont:(id)arg1;
-(void)setAttributedText:(id)arg1;
-(void)setTextColor:(id)arg1;
-(void)setText:(id)arg1;
-(void)setSelectedRange:(struct _NSRange)arg1;
-(BOOL)hasText;
-(void)insertText:(id)arg1;
-(void)deleteBackward;
-(void)setAutocapitalizationType:(int)arg1;
-(void)setAutocorrectionType:(int)arg1;
-(void)setKeyboardType:(int)arg1;
-(void)setReturnKeyType:(int)arg1;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
-(void)reloadInputViews;
-(void)setEditable:(BOOL)arg1;
-(void)setDataDetectorTypes:(unsigned)arg1;
-(void)setInputView:(id)arg1;
-(void)textViewDidBeginEditing:(id)arg1;
-(void)textViewDidEndEditing:(id)arg1;
-(BOOL)textViewShouldBeginEditing:(id)arg1;
-(BOOL)textViewShouldEndEditing:(id)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)textViewDidChangeSelection:(id)arg1;
-(void)scrollRangeToVisible:(struct _NSRange)arg1;
-(void).cxx_destruct;
-(void)setMaxHeight:(float)arg1;
-(void)setMaxNumberOfLines:(int)arg1;
-(float)contentHeight;
@end