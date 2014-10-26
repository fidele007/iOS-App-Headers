/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:47 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIPickerViewDataSource
@required
-(int)numberOfComponentsInPickerView(id):arg1 ;
-(int)pickerView(id):arg1 numberOfRowsInComponent(int):arg2 ;
-(int)numberOfComponentsInPickerView(id):arg1 ;
-(int)pickerView(id):arg1 numberOfRowsInComponent(int):arg2 ;
@end

@protocol UIPickerViewDelegate
@optional
-(id)pickerView(id):arg1 titleForRow(int):arg2 forComponent(int):arg3 ;
-(id)pickerView(id):arg1 attributedTitleForRow(int):arg2 forComponent(int):arg3 ;
-(float)pickerView(id):arg1 widthForComponent(int):arg2 ;
-(float)pickerView(id):arg1 rowHeightForComponent(int):arg2 ;
-(id)pickerView(id):arg1 viewForRow(int):arg2 forComponent(int):arg3 reusingView(id):arg4 ;
-(void)pickerView(id):arg1 didSelectRow(int):arg2 inComponent(int):arg3 ;
@end