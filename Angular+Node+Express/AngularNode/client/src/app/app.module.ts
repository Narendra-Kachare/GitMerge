import { NgModule } from '@angular/core';
import { BrowserModule, provideClientHydration } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';

import { HttpClientModule} from '@angular/common/http';   // Import
import { MarvellousService } from './marvellous.service'; // Import
@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    HttpClientModule    // Added
  ],
  providers: [
    provideClientHydration(),
    MarvellousService
  ],
  bootstrap: [AppComponent]
})
export class AppModule { }